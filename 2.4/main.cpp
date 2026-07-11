#include <iostream>

double sum(double x, double y)
{
    return (x + y);
}

double minus(double x, double y)
{
    return (x - y);
}

double multiply (double x, double y)
{
    return (x * y);
}

double divide(double x, double y)
{
    return x / y;
}


double getinput()
{
    double a {};
    std::cout << "Enter int: ";
    std::cin >> a;
    return a;
}

void printdouble(double x)
{
    std::cout << "\n" << "Double: " << (x*2) << "\n";
}

int main()
{
    double x {getinput()}, y {getinput()};
    double a {sum(x, y)}, b{minus(x, y)};
    std::cout << x << " + " << y << " = " << a << "\n";
    std::cout << x << " - " << y << " = " << b << "\n";
    printdouble(getinput());
    std::cout << "So, thanks for using my program. I'm gotta to do some operations. Bye!!" << "\n";
    std::cout << sum(4, 3) << std::endl;
    std::cout << sum(4+3, 3-4) << std::endl;
    std::cout << minus(4+3+2, 3-4+10*2) << std::endl;
    std::cout << minus(sum(4,3), minus(sum(6,2), minus(7,1))) << std::endl;
    std::cout << sum(1, multiply(2, 2)) << std::endl;
    std::cout << multiply(2, (4*4-1)) + multiply(3, (4*8-1)) << std::endl;
    std::cout << multiply(divide(2,4), divide(1,3)) << std::endl;
}

// Wowwww, it looks big :)