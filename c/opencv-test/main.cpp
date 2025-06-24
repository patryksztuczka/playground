#include <filesystem>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

using namespace cv;

int main() {
  std::cout << "cwd = " << std::filesystem::current_path() << '\n';
  Mat image = imread("c/opencv-test/build/lena.png", IMREAD_GRAYSCALE);
  namedWindow("Lena", WINDOW_AUTOSIZE);
  imshow("Lena", image);
  waitKey(0);
  return 0;
}
