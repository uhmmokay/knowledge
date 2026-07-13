#include <iostream>
#include "P.h"

int main()
{
    std::cout << "Enter height of your rectangle: ";
    double x{};
    std::cin >> x;
    std::cout << "\n" << "Enter width of your rectangle: ";
    double y{};
    std::cin >> y;
    std::cout << "\n" << "P of your rectangle is: " << getP(x, y) << "\n";
}