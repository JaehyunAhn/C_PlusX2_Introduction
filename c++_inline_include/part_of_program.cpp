#include <iostream>
#include "part_of_program.h"

int main () {
	int a, b;

	std::cout << "Input number a and b : ";
	std::cin >> a >> b;
	std::cout << "Your input is " << a << b << std::endl;

	std::cout << "times 10 : " << times10(a) << times10(b) << std::endl;
	swap(a, b);
	std::cout << "swapped : " << a << b << std::endl;

	return 0;
}
