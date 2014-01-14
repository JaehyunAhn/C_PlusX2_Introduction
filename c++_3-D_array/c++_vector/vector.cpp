#include <iostream>

using namespace std;

const int n_dim = 3;

class Vector {
	public: // constructor sets all to zero if no args
		Vector (float first=0.0, float second=0.0, float third=0.0);
		Vector& operator -= (float scalar);
		void decrement (float scalar);
		void print_out();
	private:
		float data[n_dim];
};

Vector::Vector (float first, float second, float third) {
	data[0] = first;
	data[1] = second;
	data[2] = third;
}

Vector& Vector::operator -= (float scalar) {
	int i;
	for( i=0; i < n_dim ; i++ )
		data[i] -= scalar;
	return *this;
}

void Vector::decrement (float scalar) {
	int i;
	for( i=0; i < n_dim; i++)
		data[i] -= scalar;
}

void Vector::print_out () {
	int i;
	for( i=0; i < n_dim; i++) 
		cout << data[i] << endl;
}

int main () {
	Vector velocity (100.0, 37.0, 500.6);
	velocity.print_out();

	velocity -= 25;
	velocity.print_out();

	velocity.decrement(20);
	velocity.print_out();
	return 0;
}
