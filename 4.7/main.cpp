#include <iostream>
#include <cmath>

void printBalance(long long x);
long long getBalance();

int main()
{
    long long x {getBalance()};
    printBalance(x);
    return 0;
}

long long getBalance()
{
    long long x {};
    std::cout << "Enter number: ";
    std::cin >> x;
    return x;
}

void printBalance(long long x)
{
    long long dollars {x / 100};
    long long cents {std::abs(x % 100LL)};
    std::cout << "You have: " << dollars << " Dollars," << "\n" << cents << " Cents." << "\n"; 
}