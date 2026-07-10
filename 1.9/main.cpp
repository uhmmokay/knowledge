#include <iostream>

// Wassup.

int main()
{
    int a ( 5 ), y ( 4 );
    int x { 5 };
    std::cout << a + y << "\n" << a * y << "\n" <<
        ( x = 2 ); // There, i'm trying to do some calculations with 'a','y' and "x"
    
    return 0;

    /* output:
    *
    *   9
    *   20
    *   2
    */
    
}