#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num <= -1) {
		std::cout << "Negative number entered.  Making positive.\n";
		
		num = -num;
		std::cout << num;

	}
	else {

		std::cout << "You entered: " << num;
	}
	return 0;
}
