#include <iostream>
#include <string>
#include <cstdint>

namespace Creatures
{
    enum typesM
    {
        ogre,
        dragon,
        orc,
        giant_spider,
        slime
    };

    struct Monster
    {
        const std::string name {};
        const typesM type {};
        const std::uint16_t health {};
    };
}

namespace functions
{
    void printMonster(const Creatures::Monster& m)
    {
        std::string Name {};
        switch (static_cast<uint16_t>(m.type))
        {
            case 0:
            {
                Name = "Ogre";
                break;
            }
            case 1:
            {
                Name = "Dragon";
                break;
            }
            case 2:
            {
                Name = "Orc";
                break;
            }
            case 3:
            {
                Name = "Giant Spider";
                break;
            }
            case 4:
            {
                Name = "Slime";
                break;
            }
        }
        std::cout << "This " << Name 
            << " is named " << m.name 
            << " and has " << m.health << " health." 
            << '\n';
    }
}

int main()
{
    const Creatures::Monster ogre {"Torg", Creatures::ogre, 145};
    functions::printMonster(ogre);

    const Creatures::Monster slime {"Blurp", Creatures::slime, 23};
    functions::printMonster(slime);
    
    return 0;
}