#include <iostream>

// I want to write some program, that will do calculations with a, b; using + and -. 
// (Sorry for my bad english, alright? :>)

int main()
{
    int a {};
    std::cout << "Hwllo again, so, enter a number: ";
    std::cin >> a;
    int b {};
    std::cout << "\n" << "Good, enter a second number: ";
    std::cin >> b;
    int x ( a + b ), y( a - b );
    std::cout << a << " + " << b << " = " << x << "\n";
    std::cout << a << " - " << b << " = " << y << "\n";

    return 0;
}