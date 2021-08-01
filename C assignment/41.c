/* Display sum of two numbers using call by address or call by reference */

#include <stdio.h>

void findSum(int *num1Ptr, int *num2Ptr, int *sumPtr);

int main() {
	int num1, num2, sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	findSum(&num1, &num2, &sum);

	printf("Sum: %d\n", sum);

	return 0;
}

void findSum(int *num1Ptr, int *num2Ptr, int *sumPtr) {
	*sumPtr = *num1Ptr + *num2Ptr;
}
