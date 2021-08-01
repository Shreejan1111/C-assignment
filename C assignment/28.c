/* Write a recursive function which accepts an integer and return its factorial */

#include <stdio.h>

int returnFactorial(int num);

int main() {
	int inputNum, factorial;

	printf("Enter a number: ");
	scanf("%d", &inputNum);

	if (inputNum < 0) {
		printf("Factorial of a negative number cannot be determined\n");
		return 0;
	}

	factorial = returnFactorial(inputNum);
	
	printf("Factorial: %d\n", factorial);

	return 0;
}

int returnFactorial(int num) {
	int i = 1, tempFactorial = 1;

	for (i = 1; i <= num; i++) {
		tempFactorial *= i;
	}

	return tempFactorial;
}
