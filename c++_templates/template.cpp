#include <iostream>

using namespace std;

template<class T> int compare(T data[], int i, int j);
template<class T> void swap (T data[], int i, int j);
template<class T> void sort (T data[], int n) {
	int i, j;
	for( i=0; i<n-1; i++ )
		for( j=i+1; j>0; j-- )
			if(compare(data, j-1, j) > 0)
				swap(data, j-1, j);
}
// assume operator == and operator < defined on T

template<class T> int compare(T data[], int i, int j) {
	if ( data[i] < data[j] )
		return -1;
	else if (data[i] == data[j])
		return 0;
	else
		return 1;
}

template<class T> void swap(T data[], int i, int j) {
	T temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}

int main () {
	int data[] = { 0,1,4,3,45,
					2,1,4,6,89};
	float money[] = {1.20,1.50,0.59,
					500.55,89.5};

	sort (data, int(sizeof data / sizeof(int)));
	sort (money, int(sizeof money/ sizeof(float)));

	int i;
	for(i=0; i<10; i++) {
		if(i<5)
			printf("money : %f \n",money[i]);

		printf("data : %d \n",data[i]);
	}
	

	return 0;
}
