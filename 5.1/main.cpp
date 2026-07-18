#include <iostream>
#include <limits>

int getValue()
{
    int x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

int main()
{
    std::cout << "Enter 'm' : ";
    int x {getValue()};
    const double gravity { 9.8 };
    std::cout << "F = m*g, your F = " << x << " * " << gravity << " = " << gravity * x << "\n";

    return 0;
}