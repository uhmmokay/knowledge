#include "S.h"
#include <iostream>

double getS(double a, double b)
{
    return a*b;
}

double getNumber()
{
    std::cout << "Enter Number: ";
    double a {};
    std::cin >> a;
    std::cout << std::endl;
    return a;
}