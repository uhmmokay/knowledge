#include <iostream>
#include <limits>
#include <string>

std::string getString()
{
    std::string s {};
    std::getline(std::cin >> std::ws, s);
    return s;
}

int getNumber()
{
    int x{};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

int sum(std::string x, int y)
{
    return static_cast<int>(x.length()) + y;
}

int main()
{
    std::cout << "Enter you name, i'm going to dox you hehehehhe: ";
    std::string x {getString()};
    std::cout << "... okay, enter age: ";
    int y {getNumber()};
    std::cout << "Okay, do you want a prank? (y/n): ";
    signed char choice {};
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (choice == 'y'){
        std::cout << "\nOkay, watch. Your name's symbols length (" << x.length() << ") + Your age (" << y << ") = " << sum(x, y) << '\n'; 
    }
    else {
        exit (0);
    }
}