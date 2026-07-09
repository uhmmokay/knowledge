#include <iostream>

int main() {
    std::cout << "Стандарт C++: ";
    if (__cplusplus == 202100L) std::cout << "C++23";
    else if (__cplusplus == 202002L) std::cout << "C++20";
    else if (__cplusplus == 201703L) std::cout << "C++17";
    else if (__cplusplus == 201402L) std::cout << "C++14";
    else if (__cplusplus == 201103L) std::cout << "C++11";
    else std::cout << "C++98 or <";
    
    return 0;
}
