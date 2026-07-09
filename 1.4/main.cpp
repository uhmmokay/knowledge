
// Hello Guys... i'm here again.

#include <iostream>

int main()
{
    int width ( 5 );                    // there, i'm trying to make a var named "width" with value "5"
    std::cout << width << "\n";         // prints my var!! wwwwww
    
    int a ( 4 ), b ( 3 );               // another ones :>
    std::cout << a << b << "\n";        // looks like it will displayed as "43"..

    [[maybe_unused]] double pi ( 3.14159 );     // I'm going to say to g++, that i dont wanna use this shit :)
    [[maybe_unused]] double gravity ( 9.8 );    // another one....
    
    std::cout << pi << "\n";            // I think there will be no warnings..
    
    return 0;                               
}