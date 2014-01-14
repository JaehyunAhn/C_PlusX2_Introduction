#include <stdio.h>
#include <stdlib.h>

int main () { 
	int *arr = (int *) malloc (sizeof(int) * 10);

	arr[0] = 10;
	printf("%d \n",arr[11]); // assign undifined array
	// not occurrs error because it assigned dynamically into heap
	return 0;
}
