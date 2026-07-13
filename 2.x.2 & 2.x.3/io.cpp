#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter Number: ";
    int x {};
    std::cin >> x;
    std::cout << std::endl;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "Answer: " << x << std::endl;
}