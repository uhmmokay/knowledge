#include <iostream>
#include <cstdint>
#include <string>

std::int16_t getValue();
void printStatementResult(const std::string& r);

int main()
{
    std::int16_t a {getValue()};

    if (a == 2 || a == 3 || a == 5 || a == 7)
        printStatementResult("s");
    else
        printStatementResult("sn't");

    return 0;
}

std::int16_t getValue()
{
    std::cout << "Enter digit: ";
    int a {};
    std::cin >> a;

    return static_cast<int16_t>(a);
}

void printStatementResult(const std::string& r)
{
    std::cout << "The digit i" << r << " prime\n";
}