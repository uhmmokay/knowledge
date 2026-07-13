#include <iostream>

int readNumber();
void writeAnswer(int x);

int main()
{
    int x {readNumber()}, y {readNumber()};
    writeAnswer(x+y);
}

int readNumber()
{
    int x {};
    std::cout << "\n" << "Enter Number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "\n" << x;
}