#include <chrono>  // 시간과 관련된 C++ 라이브러리

#include <example_interfaces/msg/int32.hpp>
#include <rclcpp/rclcpp.hpp>

#include <rosbag2_cpp/writer.hpp>

using namespace std::chrono_literals;  // 1s, 100ms 처럼 시간을 간단히 표현할 수 있게 하는 namespace

class DataGenerator : public rclcpp::Node  // rclcpp::Node를 상속하는 DataGenerator 클래스 정의
{
public:
  DataGenerator()
  : Node("data_generator")  // 노드 이름: data_generator
  {
    data_.data = 0;  // 
    writer_ = std::make_unique<rosbag2_cpp::Writer>(); // Writer 객체를 가리키는 writer_ 포인터 선언

    writer_->open("timed_synthetic_bag"); // ros bag 이름 

    writer_->create_topic(   // synthetic이라는 토픽 생성
      {"synthetic",
       "example_interfaces/msg/Int32",
       rmw_get_serialization_format(),  // ROS2에서 사용하는 직렬화 형식
       ""});

    timer_ = create_wall_timer(1s, std::bind(&DataGenerator::timer_callback, this)); // 1초마다 timer_callback 함수를 호출하는 timer_ 등록
  }

private:
  void timer_callback()
  {
    writer_->write(data_, "synthetic", now());   // synthetic이라는 토픽을 기록하는 time_callback

    ++data_.data;  // 1초마다 data 값이 1씩 증가. 이를 rosbag에 자동 저장
  }

  rclcpp::TimerBase::SharedPtr timer_;  // 멤버변수 timer_ 선언
  std::unique_ptr<rosbag2_cpp::Writer> writer_; // 멤버변수 writer_ 선언
  example_interfaces::msg::Int32 data_;  // 멤버변수 data_ 선언 -> Int32 메시지는 정수 데이터 하나를 담는 data필드를 가지고 있다.
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DataGenerator>());
  rclcpp::shutdown();
  return 0;
}