#include "phys.h"
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    std::cout << "Enter your Tower high (in meters): ";
    double h {getH()};
    for (int i {0}; true ; ++i)
    {
        printPositionOfBall(i, h);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}