/* WAP to read a number n from user and calculate sum of first n natural numbers using recursive function */

#include <stdio.h>

int returnSum(int num);

int main() {
	int inputNum, sum;

	printf("Enter a number: ");
	scanf("%d", &inputNum);

	sum = returnSum(inputNum);

	printf("Sum: %d\n", sum);

	return 0;
}

int returnSum(int num) {
	if (num != 0) {
		return num + returnSum(num-1);
	}
	return num;
}
