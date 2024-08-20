#include <iostream>
#include <opencv2/opencv.hpp>


int main() {
    std::cout << "test" << std::endl;

    cv::Mat image = cv::imread("./37060000631310006003_2024-07-16_00-51-28_151.jpg");
    assert(!image.empty());

    

    return 0;
}