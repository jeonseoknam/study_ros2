#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include <rosbag2_cpp/writer.hpp>

using std::placeholders::_1;

class SimpleBagRecorder : public rclcpp::Node  // rclcpp:Node를 상속받는 SimpleBagRecorder 클래스 정의
{
public:
  SimpleBagRecorder()
  : Node("simple_bag_recorder")  // 노드 이름
  {
    writer_ = std::make_unique<rosbag2_cpp::Writer>();   // writer 객체 생성. 
    // Writer 객체를 가리키는 스마트 포인터를 writer_에 저장
    // 따라서 객체에 접근할 때 . 대신 ->를 사용한다.

    writer_->open("my_bag");    // my_bag이라는 이름의 파일 open -> bag파일 이름

    subscription_ = create_subscription<std_msgs::msg::String>(
      "chatter", 10, std::bind(&SimpleBagRecorder::topic_callback, this, _1));  // chatter 토픽을 구독
      // 10 : QoS 메시지 대기열의 깊이
      // 메시지 도착 시 호출할 함수 = std::bind(...)
      // this: 현재 객체
      // _1: 나중에 전달받을 메시지
      // chatter 메시지를 수신할 때마다 topic_callback()을 실행한다.
  }

// rosbag 기록 담당부
private:
  void topic_callback(std::shared_ptr<rclcpp::SerializedMessage> msg) const // 메시지 수신, 타임스탬프 생성
  {
    // <rclcpp::SerializedMessage>: 직렬화된 메시지 사용
    // 예를 들어 "Hello ROS2"를 저장하기 적합한 바이트 데이터 형태로 다루는 것이다.
    // rosbag은 메시지를 직렬화된 형태로 저장하기 때문에, 굳이 일반 메시지 객체로 역직렬화했다가 다시 직렬화할 필요가 없도록 하기 위함
    
    rclcpp::Time time_stamp = this->now(); // 타임스탬프 생성(현재 ROS2 노드의 시각을 가져옴)\
    // 이는 원본 메시지가 생성된 시간이 아니라, 콜백에서 메시지를 처리한 시각이다.

    writer_->write(msg, "chatter", "std_msgs/msg/String", time_stamp);   // std_msgs/msg/String 타입의 chatter 토픽을 rosbag에 기록
    // SimpleBagRecorder가 "chatter" 토픽을 구독하는데, 이때 토픽이 들어올때마다 topic_callback이라는 타이머 콜백이 호출됨
    // 타이머 콜백 호출시 "chatter" 토픽이 time_stamp 시간을 가지고 write됨
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_; // SharedPtr: 여러 곳에서 소유권을 공유할 수 있다.
  std::unique_ptr<rosbag2_cpp::Writer> writer_; // unique_ptr: 하나의 포인터가 객체의 소유권을 독점한다.
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimpleBagRecorder>());
  rclcpp::shutdown();
  return 0;
}