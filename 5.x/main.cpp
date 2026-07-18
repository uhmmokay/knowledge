#include <iostream>
#include <cstdint>
#include <string>

std::string getName(int person)
{
    std::cout << "Enter the name of person #" << person << ": ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    return name;
}

std::uint16_t getAge(std::string name)
{
    std::cout << "Enter the age of " << name << ": ";
    std::uint16_t age {};
    std::cin >> age;
    return age;
}

void compare(std::uint16_t age1, std::uint16_t age2, const std::string& name1, const std::string& name2)
{
    if (age1 > age2)
    {
        std::cout << name1 << " (" << age1 << ") is older than " << name2 << " (" << age2 << ")." << "\n";
    }
    else if (age2 > age1)
    {
        std::cout << name2 << " (" << age2 << ") is older than " << name1 << " (" << age1 << ")." << "\n";
    }
    else 
    {
        std::cout << name1 << " and " << name2 << " are peers." << "\n";
    }
}

int main()
{
    std::string name1 {getName(1)}, name2 {getName(2)};
    std::uint16_t age1 {getAge(name1)}, age2 {getAge(name2)};
    compare(age1, age2, name1, name2);

    return 0;
}

/*
Yall guys mentioned, that i was stopped writing any comments :(
I'm sorryyy, that's because i've a lot of C++ material to learn. I hope you've starred by repo :)
*/