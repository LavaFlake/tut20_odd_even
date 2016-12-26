#include <iostream>

int main() {
	std::cout << "Give me a number: ";

	int a;
	std::cin >> a;

	if (a % 2 == 1)
		std::cout << "The number is odd." << std::endl;
	else
		std::cout << "The number is even." << std::endl;

	return 0;
}
