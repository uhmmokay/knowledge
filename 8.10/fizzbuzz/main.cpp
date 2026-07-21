#include <iostream>
#include <limits>

void fizzbuzz(unsigned long long x)
{
    for (unsigned long long i {1}; i <= x; ++i)
    {
        if (i % 3 == 0)
        {
            std::cout << "fizz";
        }

        if (i % 5 == 0)
        {
            std::cout << "buzz";
        }

        if (i % 7 == 0)
        {
            std::cout << "pop";
        }

        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            std::cout << i;
        }

        std::cout << "\n";
    }
}

unsigned long long getValue()
{
    std::cout << "Enter Value: ";
    unsigned long long x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

signed main()
{
    unsigned long long x{getValue()};
    fizzbuzz(x);
}