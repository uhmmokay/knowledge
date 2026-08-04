#include <iostream>
#include <string_view>
#include <cstdint>

namespace Math
{
    struct fraction
    {
        int numerator {};
        int denominator {};
    };
}

void callcin (int* x, bool y)
{
    std::string_view what {y ? "numerator" : "denominator"};
    std::cout << "Enter a value for the " << what << ": ";
    std::cin >> *x;
}

void multipy(const Math::fraction& x, const Math::fraction& y)
{
    std::cout << "Your fractions multiplied together: "
    << x.numerator * y.numerator
    << "/" 
    << x.denominator * y.denominator 
    << '\n';
}

int main()
{
    Math::fraction fraction1 {}, fraction2 {};
    for (std::int16_t i {1}; i <= 2; ++i)
    {
        callcin(((i == 1) ? &fraction1.numerator : &fraction2.numerator), true);
        callcin(((i == 1) ? &fraction1.denominator : & fraction2.denominator), false);
        std::cout << '\n';
    }
    multipy(fraction1, fraction2);
}