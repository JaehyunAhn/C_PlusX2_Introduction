#include <iostream>

using namespace std;

const int n_dim = 3;

class Vector {
	public: // constructor sets all to zero if no args
		Vector (float first=0.0, float second=0.0, float third=0.0);
		Vector& operator -= (float scalar);
		Vector& operator +  (Vector other);
		void add (Vector first, Vector second);
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

Vector& Vector::operator + (Vector other) {
	Vector result; // no constructor: default is all zeros
	for (int i=0; i < n_dim ; i++)
		result.data[i] = data[i] + other.data[i];
	return result;
}

void Vector::add (Vector first, Vector second) {
	for (int i=0; i < n_dim ; i++)
		data[i] = first.data[i] + second.data[i];
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
	cout << endl;

	velocity -= 25;
	velocity.print_out();
	cout << endl;

	velocity.decrement(20);
	velocity.print_out();
	cout << endl;

	Vector accel (-1.0, 1.0, 0.0), final_velocity;
	final_velocity = velocity + accel;
	final_velocity.print_out();
	cout << endl;
	
	final_velocity.add (velocity, accel);
	final_velocity.print_out();
	cout << endl;
	
	accel -= 10;
	final_velocity.add (final_velocity, accel);
	final_velocity.print_out();
	cout << endl;
	
	return 0;
}
