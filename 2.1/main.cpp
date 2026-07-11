#include <iostream>


// Hi again, in this code, i'm trying to make functions. It's going to be cool i promise

void B()
{
    std::cout << "B" << "\n";
}

void A()
{
    std::cout << "A, Printing B..." << "\n";
    B();
    std::cout << "B completed..." << "\n";
}

int main()
{
    std::cout << "Starting void A..." << "\n";
    A();
    std::cout << "A Completed..." << "\n";
}