/* WAP to demonstrate the use of parameterized macro in C */

#include <stdio.h>

#define max(X, Y) ((X) > (Y) ? (X) : (Y))

int main() {
	printf("Max: %d\n", max(1, 2));

	return 0;
}
