#include <iostream>
#include <limits>

int calculate(int x, int y, char op)
{
    switch(op)
    {
    case '+':
        return x+y;
    case '-':
        return x-y;
    case '*':
        return x*y;
    case '/':
        return x/y;
    case '%':
        return x%y;
    }
    return 0;
}

const int getValue(int num)
{
    std::cout << "Enter number #" << num << ": ";
    int x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

const char getOp()
{
    std::cout << "Enter char: ";
    char x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    int y {static_cast<int>(x)};
    switch (y){
        case 43:
            return x;
        case 45:
            return x;
        case 42:
            return x;
        case 47:
            return x;
        case 37:
            return x;
        default:
            std::cerr << "Invalid Operator\n";
    }
    exit (1);
}

int main()
{
    const int x{getValue(1)}, y{getValue(1)};
    const char Operator{getOp()};
    std::cout << x << " " << Operator << " " << y << " = " << calculate(x, y, Operator) << "\n";
}