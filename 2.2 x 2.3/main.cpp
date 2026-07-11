#include <iostream>

// Rewriting my program using functions :)
void done ()
{
    std::cout << "\n" << "Done!";
}
int getinput(){

    int a {};

    std::cout << "Enter int: ";
    std::cin >> a;

    return a;

}

int main(){

    int x{ getinput() }, y { getinput() };
    std::cout << "\n" << x << " + " << y << " = " << (x+y);
    std::cout << "\n" << x << " - " << y << " = " << (x-y);   
    done();
    
}