#include <iostream>
#include <string.h>
using namespace std;

/*
   Project Purpose : multiple inheritance
Example : create a separate Error class and make a new class bulit up out of it and Bucket
 */

class Error {
	public:
		Error (const char* new_message);
		void print_err (const char* message = "none");
	private:
		char *default_message;
};

Error::Error (const char* new_message ) {
	default_message = (char *) new_message;
}

class Error_bucket : public Error {
	public:
		Error_bucket (const char* new_default = "Hole in bucket");
};

// no constructor call for Bucket: has default constructor
Error_bucket::Error_bucket (const char* new_default) : Error (new_default) {
}

void Error::print_err (const char *message) {
	if(strcmp(message, "none") == 0) {
		cerr << "[Error] default class msg" << endl;
		cerr << default_message << endl;
		cerr << "End" << endl;
	}
	else
		cerr << message << endl;
}

int main () {
/*

Output:

	[Error] default class msg
	d
	End

	[Error] default class msg
	Hole in bucket
	End

	[Error] default class msg
	Leaky
	End

	Fixed
*/

	Error_bucket beyond_pale, holy_bucket ("Leaky");
	Error def("d");
	
	def.print_err();
	beyond_pale.print_err ();
	holy_bucket.print_err ();
	holy_bucket.print_err ("Fixed");
	
	return 0;
}
