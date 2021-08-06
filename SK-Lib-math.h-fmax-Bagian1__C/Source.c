#include <stdio.h>      /* printf */
#include <math.h>       /* fmax */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("fmax (100.0, 1.0) = %f\n", fmax(100.0, 1.0));
	printf("fmax (-100.0, 1.0) = %f\n", fmax(-100.0, 1.0));
	printf("fmax (-100.0, -1.0) = %f\n", fmax(-100.0, -1.0));
	_getch();
	return 0;
}