#include <iostream>
#include <limits>
#include <string>
#include <string_view>
#include <cstdint>

namespace Functions
{
    template <typename T>
    T getSomething(std::string_view x)
    {
        (void)x;
        return T{};
    }

    template<> std::string getSomething<std::string>(std::string_view x)
    {
        std::cout << x << ": ";
        std::string y {};
        std::getline(std::cin >> std::ws, y);
        return y;
    }

    template<> std::uint16_t getSomething<std::uint16_t>(std::string_view x)
    {
        std::cout << x << ": ";
        std::uint16_t y {};
        std::cin >> y;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // '\n' вместо 'n'
        return y;
    }
}

class Yoghurt
{
    std::string name { "Zeva" };
    std::string yummy { "banana" };
    std::string colorOfPackage { "yellow" };
    bool exist { false };

public:
    void eat()
    {
        std::cout << "Eaten!\n";
        exist = false;
        name = "Zeva";
        yummy = "banana";
        colorOfPackage = "yellow";
    }

    void replace()
    {
        while (true)
        {
            std::uint16_t y { Functions::getSomething<std::uint16_t>(
                "Enter what you want to change:\n"
                "1. Name\n"
                "2. Taste\n"
                "3. Package Color\n"
                "Your choice: ") };

            if (y == 0 || y > 3)
            {
                std::cout << "Enter correct value!\n";
                continue;
            }

            std::string value = Functions::getSomething<std::string>("Enter new value: ");

            switch (y)
            {
                case 1: name = value; break;
                case 2: yummy = value; break;
                case 3: colorOfPackage = value; break;
            }
            break;
        }
    }

    void printstats() const
    {
        std::cout << "Name: " << name
                  << ";\nTaste: " << yummy
                  << ";\nColor of package: " << colorOfPackage << '\n';
    }

    bool check(std::string_view fM, std::uint16_t type)
    {
        switch (type)
        {
            case 1:
                if (!exist)
                {
                    exist = true;
                    return false;
                }
                else
                {
                    std::cerr << fM << '\n';
                    return true;
                }

            case 2:
                if (!exist)
                {
                    std::cerr << fM << '\n';
                    return true;
                }
                else
                {
                    return false;
                }
        }
        return false;
    }
};

int main()
{
    Yoghurt yoghurt {};

    while (true)
    {
        std::uint16_t x { Functions::getSomething<std::uint16_t>(
            "Hi! You're in Yoghurt fabric. Choose what to do:\n"
            "1. Create New Yoghurt\n"
            "2. Eat Yoghurt\n"
            "3. See your yoghurt\n"
            "4. Replace something (name, taste and color of package)\n"
            "5. Exit\n"
            "Your choice: ") };

        switch (x)
        {
            case 1:
            {
                if (yoghurt.check("Yoghurt already exist.", 1))
                    continue;
                std::cout << "Created! To see, visit option number '3'\n";
                continue;
            }

            case 2:
            {
                if (yoghurt.check("Yoghurt doesn't exist", 2))
                    continue;
                yoghurt.eat();
                continue;
            }

            case 3:
            {
                if (yoghurt.check("Yoghurt doesn't exist", 2))
                    continue;
                yoghurt.printstats();
                continue;
            }

            case 4:
            {
                if (yoghurt.check("Yoghurt doesn't exist", 2))
                    continue;
                yoghurt.replace();
                continue;
            }

            case 5:
            {
                return 0;
            }

            default:
            {
                std::cout << "Invalid choice!\n";
                continue;
            }
        }
    }
}