#include "Shapes.h"
#include <math.h>
#include <stdio.h>

int main () {
	Circle letter(10, 100);
	printf("Radius : %d\n"
			"Area : %.2f\n",
			letter.get_radius(),
			letter.get_area()
		  );
	return 0;
}
