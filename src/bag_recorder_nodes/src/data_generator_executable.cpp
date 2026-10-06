#include <chrono>

#include <rclcpp/clock.hpp>
#include <rclcpp/duration.hpp>
#include <rclcpp/time.hpp>
#include <example_interfaces/msg/int32.hpp>

#include <rosbag2_cpp/writer.hpp>
#include <rosbag2_cpp/writers/sequential_writer.hpp>
#include <rosbag2_storage/serialized_bag_message.hpp>

using namespace std::chrono_literals;

int main(int, char**)
{
  example_interfaces::msg::Int32 data;
  data.data = 0;
  std::unique_ptr<rosbag2_cpp::Writer> writer_ = std::make_unique<rosbag2_cpp::Writer>();  // Writer 객체를 가리키는 writer_ 포인터 선언

  writer_->open("big_synthetic_bag");  // rosbag 파일 생성

  writer_->create_topic(  
    {"synthetic",                                      // 토픽 생성(rosbag에 write)
     "example_interfaces/msg/Int32",
     rmw_get_serialization_format(),
     ""});

  rclcpp::Clock clock;
  rclcpp::Time time_stamp = clock.now();  // ROS2 노드의 현재 시각을 time_stamp에 넣는다
  for (int32_t ii = 0; ii < 100; ++ii) {   // 100 번 반복하는 반복문
    writer_->write(data, "synthetic", time_stamp);  // data=0, 1, 2, ... 99까지 증가하며 data.data가 출력된다.
    ++data.data;
    time_stamp += rclcpp::Duration(1s); // time_stamp도 1초씩 증가하며 출력 -> ROS2 노드 현재 시각을 기록해놓고 거기로부터 1초씩 증가.
  }

  return 0;
}