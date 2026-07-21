#include <iostream>
#include <limits>

int getValue(int x)
{
    std::cout << "Enter int #" << x << ": ";
    int y {};
    std::cin >> y;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return y;
}

void PrintNumbers(int x, int y)
{
    for (int i {x}; i <= y; ++i)
    {
        std::cout << i;
        if (i != y)
        {
            std::cout << ", ";
        } else {std::cout << "\n";}

    }
}

int main()
{
    int x {getValue(1)}, y {getValue(2)};
    PrintNumbers(x, y);
    return 0;
}