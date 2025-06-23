#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex car_mutex;

void drive_car(string driver_name) {
  unique_lock<mutex> car_lock(car_mutex);
  cout << driver_name << " is driving the car" << endl;
  std::this_thread::sleep_for(std::chrono::seconds(2));
  cout << driver_name << " has finished driving the car" << endl;
  car_lock.unlock();
}

int main() {
  thread t1(drive_car, "John");
  thread t2(drive_car, "Jane");

  t1.join();
  t2.join();

  return 0;
}
