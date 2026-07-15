#include <iostream>

int readNumber()
{
    #ifdef DEBUG
    std::cerr << "readNumber called;" << "\n";
    std::cerr << "Reading input...;" << "\n";
    #endif
	std::cout << "Please enter a number: ";
	int x {};
	std::cin >> x;
    #ifdef DEBUG
    std::cerr << "Readed! Returning: " << x << "\n";
    #endif    
	return x;
}

void writeAnswer(int x)
{
    #ifdef DEBUG
    std::cerr << "writeAnswer called()" << "\n";
    #endif  
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
    #ifdef DEBUG
    std::cerr << "Defining int x, y: " << "\n";
    #endif  
	int x{ };
	int y{ };
    #ifdef DEBUG
    std::cerr << "Getting x, calling readNumber(): " << "\n";
    #endif      
	x = readNumber();
    #ifdef DEBUG
    std::cerr << "Getting y, calling readNumber(): " << "\n";
    #endif  
	y = readNumber();
    #ifdef DEBUG
    std::cerr << "x = " << x << ", y = " << y << ", calling writeAnswer()" << "\n";
    #endif  
	writeAnswer(x/y);

	return 0;
}