#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 1000

float first[N], second[N], result[N];
int i, j, interactions = 1000;
clock_t start, end, elapsed;

int main() {
	for (i=0; i<N; i++) {
		first[i] = random();
		second[i] = random();
	}
	start = clock();
	for(i=0; i<interactions; i++)
		for(j=0; j<N; j++)
			result[j] = first[j] * second[j];
	end = clock();
	printf("Timing ended.\n\n");
	elapsed = end - start;
	printf("Time: %fs\n",(float)(elapsed)/CLOCKS_PER_SEC);

	return 0;
}
