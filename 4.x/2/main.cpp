#include "phys.h"
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    std::cout << "Enter your Tower high (in meters) up to 122.5: ";
    double h {getH()};
    if (h > 122.5)
    {
        std::cout << "I SAID, UP TO 122.5!!!" << '\n'; 
        exit (1);
    }
    printPositionOfBall(0, h);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printPositionOfBall(1, h);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printPositionOfBall(2, h);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printPositionOfBall(3, h);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printPositionOfBall(4, h);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printPositionOfBall(5, h);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printPositionOfBall(6, h);
}