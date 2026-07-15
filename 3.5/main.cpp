#include <iostream>

int sum(int x, int y);
int sub(int x, int y);
int readinput();

int main()
{
    #ifdef DEBUG
    std::cerr << "main() called;" << "\n";
    std::cerr << "calling readinput() for x; " << "\n";
    #endif

    int x {readinput()};

    #ifdef DEBUG
    std::cerr << "x = " << x << "\n";
    std::cerr << "calling readinput() for y; " << "\n";
    #endif

    int y{readinput()};
    #ifdef DEBUG
    std::cerr << "y = " << y << "\n";
    std::cerr << "calling sum(); " << "\n";
    #endif
    std::cout << x << " + " << y << " = " << sum(x, y) << "\n";
    #ifdef DEBUG
    std::cerr << "calling sub(); " << "\n";
    #endif
    std::cout << x << " - " << y << " = " << sub(x, y) << "\n";
}

int sum(int x, int y)
{
    #ifdef DEBUG
    std::cerr << "sum() called, return: " << x+y << "\n";
    #endif
    return x+y;
}

int sub(int x, int y)
{
    #ifdef DEBUG
    std::cerr << "sub() called, return: " << x-y << "\n";
    #endif
    return x-y;
}

int readinput()
{
    #ifdef DEBUG
    std::cerr << "readinput() called." << "\n";
    #endif
    int x {};
    #ifdef DEBUG
    std::cerr << "reading input..." << "\n";
    #endif
    std::cout << "Enter number: ";
    std::cin >> x;
    #ifdef DEBUG
    std::cerr << "readed! returning: " << x << "\n";
    #endif
    return x;
}