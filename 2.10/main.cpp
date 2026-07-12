/* Hello guys, writing "2.8" was hard, but i'm very happy, 
cuz my knowledge of C++ language has grew up. Now, i'm going to start learning
preprocessor. Enjoy.

There is "ifdef", "ifndef", "endif"
*/

#include <iostream>
#define GRIFFIN "Peter Griffin"
#define ME

int main()
{
    
    #if 0
    #ifdef GRIFFIN
    std::cout << "\n" << GRIFFIN << std::endl;
    #endif // Griffin

    #ifdef ME
    std::cout << "I dont wanna give you my name!" << std::endl;
    #endif // ME
    #endif // if
    return 0;
}


