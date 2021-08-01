/* WAP to read n numbers from user and store in array. Add even numbers and odd
 * numbers separately and display the result using function */

#include <stdio.h>
#include <stdlib.h>

void evenOddSum(int numberOfInputs, int nums[]);

int main() {
	int numberOfInputs, *nums;

	printf("How many numbers do you want to enter? ");
	scanf("%d", &numberOfInputs);

	nums = malloc(numberOfInputs * sizeof(int));

	evenOddSum(numberOfInputs, nums);

	free(nums);

	return 0;
}

void evenOddSum(int numberOfInputs, int nums[]) {
	int i, evenSum = 0, oddSum = 0;

	for (i = 0; i < numberOfInputs; i++) {
		printf("Enter the number #%d: ", i+1);
		scanf("%d", &nums[i]);

		if (nums[i] % 2 == 0) {
			evenSum += nums[i];
		} else {
			oddSum += nums[i];
		}
	}

	printf("Even sum: %d, Odd sum: %d\n", evenSum, oddSum);
}
