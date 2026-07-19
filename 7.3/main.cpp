#include <iostream>
#include <cstdint>
#include <limits>
#include <string_view>

namespace forMain
{
    std::int16_t getNumber(std::string_view nameof)
    {
        std::cout << "Enter " << nameof << " integer: ";
        std::int16_t x {};
        std::cin >> x;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return x;
    }

    void printResult (std::int16_t x, std::int16_t y)
    {
        bool compare {x < y};
        std::cout << "The smaller value is " << (compare ? x : y) << "\nThe larger value is " << (compare ? y : x) << "\n";
    }
}

int main()
{

    std::int16_t x {forMain::getNumber("an")};
    std::int16_t y {forMain::getNumber("a larger")};

    if (x > y){
        std::cout << "Swapping the values: \n";
    } else {
        std::cout << "Thanks! :> \n";
    }
    forMain::printResult(x, y);

}