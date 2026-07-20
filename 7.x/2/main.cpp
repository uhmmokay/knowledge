#include <iostream>
#include <cstdint>
#include <limits>

std::int16_t accumulate(std::int16_t x)
{
    static std::int16_t y {}; y += x;
    return y;
}

std::int16_t getValue (std::int16_t num)
{
    std::cout << "Please, enter number #" << num << ": ";
    std::int16_t x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

int main()
{
    std::cout << accumulate(getValue(1)) << '\n'; // prints 4
    std::cout << accumulate(getValue(2)) << '\n'; // prints 7
    std::cout << accumulate(getValue(3)) << '\n'; // prints 9
    std::cout << accumulate(getValue(4)) << '\n'; // prints 10

    return 0;
}