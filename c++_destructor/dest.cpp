#include <iostream>

using namespace std;

class DynamicArray {
	public:
		int *arr;
		DynamicArray(int arraySize) {
			arr = new int [arraySize];
		}
		~DynamicArray() {
			delete [] arr;
			arr = NULL;
		}
};

int main () {
	int size;
	int i;
	cout << "Type int size: ";
	cin >> size;

	DynamicArray example(size);
	cout << "Type " << size << " numbers" << endl;
	for( i = 0; i < size; i++ )
		cin >> example.arr[i];
	for( i = size-1 ; i >= 0 ; i--)
		cout << example.arr[i] << " ";
	cout << endl;

	return 0;
}
