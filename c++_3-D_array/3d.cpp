#include <iostream>
using namespace std;

class Array2D;
class Array3D;

class Array1D {
	public:
		Array1D (int new_max);
		~Array1D ();
		friend class Array2D; // let 2D see 1D's private members
	private:
		int max;
};

class Array2D {
	public:
		Array2D (int new_max_y, int new_max_z);
		~Array2D ();
		friend class Array3D;
	private:
		int get_z ();
		Array1D **rows;
		int max;
};

class Array3D {
	public:
		// supply example to clone from if all to be same type and
		// allocated when array is allocated
		Array3D (int new_max_x, int new_max_y, int new_max_z);
		~Array3D ();
		int get_max_x ();
		int get_max_y ();
		int get_max_z ();
	private:
		Array2D **planes;
		int max;
};


int main () {
	return 0;
}
