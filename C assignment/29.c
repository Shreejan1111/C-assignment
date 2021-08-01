/* WAP to read an integer from user and dispaly the sum of even digits only */

#include <stdio.h>

int main() {
	int inputNum, digit, sum = 0, i;

	printf("Enter a number: ");
	scanf("%d", &inputNum);

	while (inputNum != 0) {
		digit = inputNum % 10;

		if (digit % 2 == 0) {
			sum += digit;
		}

		inputNum = inputNum / 10;
	}

	printf("Sum of even digits: %d\n", sum);

	return 0;
}
