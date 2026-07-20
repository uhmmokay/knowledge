#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num <= -1)
    {
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;
    } else if (num == 0) {std::cout << "Enter non-zero number pleassseeee.." << "\n"; exit (1);}
	std::cout << "You entered: " << num << "\n";

	return 0;
}