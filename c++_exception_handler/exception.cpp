#include <iostream>
using namespace std;

class Overflow {
	// whatever state you want to store about overflows
};

try {
	Overflow status;
	// code that causes an exception results in:
	throw status;
}
catch (Overflow &overflow_info) {
	// use overflow_info to handle the exception
	printf("Overflow occurrs!\n");
}

int main () {
	// they are not fully implemented in all compliers, try to execute peace of code.
	// if it fails, you fall through to a catch which handles the exception

	return 0;
}
