#include <iostream>

namespace Me
{
   bool changesleepstate()
   
   {
        static bool x {false};
        x = !x;
        return x;
    }
}

int main()
{


start_programm:
std::cout << "Do you want to sleep? Press Enter to change your state to 'sleeping', or 'not sleeping': ";
{
char input {};
input = std::cin.get();

switch (input)
{
    case '\n':
    switch (static_cast<int>(Me::changesleepstate()))
    {

        case 1:
            std::cout << "You're sleeping!\n";
            break;

        case 0:
            std::cout << "You've woked up!\n";
            break;
        default:
            break;

    }
    default:
        break;
} 

goto start_programm;
}


return 0;
}