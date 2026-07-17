#include <cstdint>
#include <limits>
#include <iostream>

std::int16_t sum(std::int16_t x, std::int16_t y);
char getValue();

int main()
{
    std::cout << "Enter only ONE char plsssssss: "; char x {getValue()};
    std::cout << "You entered: '" << x << "', ASCII Code: " << static_cast<std::int16_t>(x) << '\n';
    std::int16_t y {static_cast<std::int16_t>(x)};
    std::cout << "Enter only ONE second char plsssssss. I'm going to sum previous and this: "; char z {getValue()};
    std::int16_t c {static_cast<std::int16_t>(z)};
    std::cout << x << ", ASCII:(" << y << ")" << " + " << z << ", ASCII:(" << c << ") = " << sum(y, c) << '\n'; 
    return 0;
}

char getValue()
{
    char x {};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return x;
}

std::int16_t sum(std::int16_t x, std::int16_t y)
{
    return x + y;
}