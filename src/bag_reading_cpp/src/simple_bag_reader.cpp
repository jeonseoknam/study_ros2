#include <chrono>
#include <functional>
#include <iostream>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rosbag2_transport/reader_writer_factory.hpp"
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;  // 1s, 100ms 같은 숫자 기호를 쓸 수 있게 하는 namespace

class PlaybackNode : public rclcpp::Node // rclcpp::Node를 상속받는 PlaybackNode -> Node 클래스의 여러 메서드 사용 가능
{
  public:
    PlaybackNode(const std::string & bag_filename)  // rosbag 파일(bag_filename)을 인자로 받는 노드. (const std::string &: 문자열을 복사하지 않고 reference로 전달한다.)
    : Node("playback_node")
    {
      publisher_ = this->create_publisher<turtlesim::msg::Pose>("/turtle1/pose", 10); // /turtle1/pose 토픽 발행자
      timer_ = this->create_wall_timer(  
          100ms, std::bind(&PlaybackNode::timer_callback, this)); // timer_callback을 갖는 timer_ 생성. 100ms마다 콜백 호출

      rosbag2_storage::StorageOptions storage_options; // StorageOptions: rosbag 저장소를 열 때 필요한 설정 정보를 담는 구조체
      storage_options.uri = bag_filename;  // uri: rosbag 경로
      reader_ = rosbag2_transport::ReaderWriterFactory::make_reader(storage_options); // rosbag을 읽을 수 있는 reader 객체를 생성
      // rosbag2_transport: rosbag 읽기, 재생 관련 기능을 제공하는 namespace
      // ReaderWriterFactory: Reader 또는 Writer 객체를 생성하는 팩토리 클래스
      // make_reader(): 설정에 맞는 reader 객체 생성
      // storage_options: 어떤 rosbag을 읽을지 등에 대한 설정

      reader_->open(storage_options); // reader로 rosbag을 열어 메시지를 읽을 준비
    }

  private:
    void timer_callback()
    {
      while (reader_->has_next()) {  // has_next(): reader에 아직 읽지 않은 메시지가 남아 있는지 확인하는 함수.(true: 읽을 메시지가 남아 있음, false: 더 이상 읽을 메시지가 없음)
        // has_next()=true이면 메시지가 남아있으므로 while()문에 들어간다.
        rosbag2_storage::SerializedBagMessageSharedPtr msg = reader_->read_next(); // read_next(): rosbag에 기록된 다음 메시지를 반환
        // 따라서 msg는 rosbag에서 읽어 온 직렬화된 메시지 객체를 가리키는 스마트 포인터이다.

        if (msg->topic_name != "/turtle1/pose") { // 토픽 필터링 -> /turtle1/pose만 읽는다
          continue;
        }

        rclcpp::SerializedMessage serialized_msg(*msg->serialized_data); // SerializedMessage 생성(이미 rosbag에 저장되어 있던 직렬화 데이터를 rclcpp::SerializedMessage로 가져옴)
        turtlesim::msg::Pose::SharedPtr ros_msg = std::make_shared<turtlesim::msg::Pose>();  // 새로운 pose 메시지 객체를 생성

        serialization_.deserialize_message(&serialized_msg, ros_msg.get());  // 역직렬화(바이트 메시지 -> Pose 메시지). rosbag에 저장된 직렬화 데이터를 일반적인 ROS2 Pose 메시지로 복원한다.

        publisher_->publish(*ros_msg);  // /turtle1/pose 토픽 발행
        std::cout << '(' << ros_msg->x << ", " << ros_msg->y << ")\n"; // /turtle1/pose 토픽에서 x, y 좌표값을 출력

        break;
      }
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<turtlesim::msg::Pose>::SharedPtr publisher_;

    rclcpp::Serialization<turtlesim::msg::Pose> serialization_;
    std::unique_ptr<rosbag2_cpp::Reader> reader_;
};

int main(int argc, char ** argv)
{
  if (argc != 2) { // 인자가 올바르게 존재하지 않으면 에러
    std::cerr << "Usage: " << argv[0] << " <bag>" << std::endl;
    return 1;
  }

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PlaybackNode>(argv[1]));
  rclcpp::shutdown();

  return 0;
}