#include <iostream>
#include <cstddef>
#include <cstdint> 
int main()
{
    signed short x {};
    std::uint8_t y {};
    std::size_t z {sizeof(x) * 8};
    std::size_t a {sizeof(y) * 8};
    std::cout << z << ", " << a << "\n";

}

// embedded be like: