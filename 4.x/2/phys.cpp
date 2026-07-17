#include <iostream>
#include <limits>
#include "phys.h"

double getH()
{
    double h {};
    std::cin >> h;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return h;
}

void printPositionOfBall(int t, double h)
{
    constexpr double g {9.8};
    double S {(g * t * t) / 2};
    double ch {h - S};
    if (ch < 0)
    {
        std::cout << "The ball is on the ground. Exiting..." << "\n";
        exit(0);
    }
    else 
    {
        std::cout << "Current time: " << t << ", Current Height: " << ch << "\n";
    }
}