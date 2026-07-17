#include <ios>
#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;
}

int readInput()
{
    std::cout << "Enter int: ";
    int x {};
    std::cin >> x;
    std::cout << std::endl;
    return x;
}

int main()
{
    int x {readInput()}, y {readInput()};
    std::cout << x << " and " << y << "Equals?: " << std::boolalpha << isEqual(x, y);
    return 0;

}