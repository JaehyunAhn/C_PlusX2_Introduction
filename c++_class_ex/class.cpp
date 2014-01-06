#include <iostream>
#include <string>

using namespace std;

class Profile {
	public:
		void printProfile ();
		void setName (string name);
		void setPhoneNumber (string number);
	private:
		string _name;
		string _phoneNumber;
};

void Profile::setName (string name) {
	_name = name;
}

void Profile::setPhoneNumber (string number) {
	_phoneNumber = number;
}

void Profile::printProfile () {
	std::cout << "Name : " << _name.c_str() << std::endl;
	std::cout << "Phone No : " << _phoneNumber.c_str() << std::endl;
}

int main () {
	Profile myProfile;

	myProfile.setName("Sogo");
	myProfile.setPhoneNumber("010-123-4567");
	myProfile.printProfile();
	return 0;
}
