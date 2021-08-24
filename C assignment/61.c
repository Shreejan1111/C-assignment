/* WAP to create custom header file and use functions from the header file in
 * another program */

#include <stdio.h>
#include "61-header.h"

int main() {
	printf("Sum of 10 and 6 is: %f\n", sum(10.0, 6.0));
	printf("Difference of 10 and 6 is: %f\n", diff(10.0, 6.0));

	return 0;
}
