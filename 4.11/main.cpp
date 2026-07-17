#include <iostream>
#include <limits>

char getAnswer();

int main()
{
    char x { getAnswer() };
    if (x == 'y')
    {
        std::cout << "OwO Thank you :))))"<< "\n";
        return 0;
    }
    else if (x == 'n')
    {
        std::cout << "Noooooo :( Im sad :<" << "\n";
        return 0;
    }
    else
    {
        std::cout << "Answer me please :((((" << "\n";
        return 1;
    }
}

char getAnswer()
{
    std::cout << "Do ou like me ??7? (y/n): ";
    char x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x; 
}