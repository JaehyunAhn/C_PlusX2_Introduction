#include <iostream>

using namespace std;

class Array1D {
	public:
		Array1D ( int new_max );
		~Array1D ();
		int& operator [] (int ind);
	private:
		int *data;
		int max;
};

Array1D::Array1D (int new_max ) {
	max = new_max;
	// this is why segmentation fault occurrs
	data = new int [20]; // assign array as an dynamic way
}

Array1D::~Array1D () {
}

int& Array1D::operator [] (int ind) {
#ifdef BOUNDS_CHECK
	if ((ind<0) || (ind>=max)) {
		cout << "Error bounding" << endl;
	else 
#endif /* Bounds Check */
	{
		//cout << ind << " size of index" << endl;
		return data[ind];
	}
}

/* Segmentation Fault: 11
   * Boundary unidentified behavior
   */

int main () {
	int limit = 100;
	Array1D scores(limit);
	
	int i;
	for( i=0; i < limit; i++)
		scores[i] = 0;

	scores[30] = 10;
	return 0;
}
