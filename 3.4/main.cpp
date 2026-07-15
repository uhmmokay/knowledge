#include <iostream>

// int getFour()
// {
//     std::cerr << "int getFour() has called" << "\n";
//     return 4;
// }

// int main()
// {
//     std::cerr << "int main() has called" << "\n";
//     std::cout << getFour;
//     return 0;
// }

// Hii!!! So, i'm going to try std::cerr. It's for debugging i guess.
// Fun fact: I use arch, btw

// So, i've debugged my ass program, there is an error on line 12.
// Okay, there is a final version after correction:

int getFour()
{
    std::cerr << "int getFour() has called" << "\n";
    return 4;
}

int main()
{
    std::cerr << "int main() has called" << "\n";
    std::cout << getFour();
    return 0;
}

// It works!!! Verdict: Use std::cerr for debuggin'
