#include <iostream>
#include <limits>
#include <cstdint>
#include <bitset>

std::int16_t getValue()
{
    std::cout << "Enter Value: ";
    std::int16_t x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

int main()
{
    std::int16_t x {getValue()};
    std::cout << "You Value in Octal: " << std::oct << x << ";\nYour Value in Hex: " << std::hex << x << ";\n Your value in binary: " << std::bitset<16>(x) << "\n";
    return 0;
}