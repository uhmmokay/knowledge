#include <iostream>

int main()
{
    std::cout << "hi cutie :_) enter a number, plzzz: ";
    int c {};

    std::cin >> c;
    int x { c * 2 };

    std::cout << x;

    std::cout << "\n You saw what i can do ? :> ";
    int y {};
    std::cout << "\n Enter Another one plssssss: ";
    std::cin >> y;
    int ys {y * y};
    std::cout << "Look at this one, your number in ^2 equals: " << ys;
    


    return 0;
}