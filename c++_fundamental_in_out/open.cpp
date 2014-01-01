#include <iostream>
#include <fstream>

inline int times10 (int n) {
	return 10 * n;
}

int main() {
	int i;
	std::cout << "Enter a number : ";
	std::cin >> i;
	std::cout << i << "times 10 is :" << times10(i) << std::endl;

	std::ofstream my_out("file.txt", std::ios::out);
	my_out << "A line of text eneded by a number : " << 100 << std::endl;

	std::ifstream my_in;
	my_in.open ("file.txt", std::ios::in);
	if(!my_in) {
		std::cerr << "open failed" << std::endl;
		exit (-1);
	}
	else {
		std::string data;
		getline( my_in, data);
		std::clog << data << std::endl;
		my_in.close ();
	}
	return 0;
}
