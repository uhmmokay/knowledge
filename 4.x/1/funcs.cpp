#include "funcs.h"
#include <cstdlib>
#include <iostream>
#include <limits>


double getDouble()
{
    double x {};
    std::cout << "Enter number: ";
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

char getOperator()
{
    char o {};
    std::cout << "Enter operator: ";
    std::cin >> o;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return o;
}

void printResult(double x, double y, char z)
{
    double c {};

    if (static_cast<int>(z) == 43)
    {
        c = {x + y};
    }

    else if (static_cast<int>(z) == 45)
    {
        c = {x - y};
    }
    
    else if (static_cast<int>(z) == 42)
    {
        c = {x * y};
    }

    else if (static_cast<int>(z) == 47)
    { 
        c = x / y; 
    }

    else {
        std::cerr << "Error. Invalid Operator." << "\n";
        exit(1);
    }

    std::cout << x << char {32} << z << char {32} <<  y << " = " << c << "\n";
}