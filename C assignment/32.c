/* WAP to read n float numbers from users and store them in array and find
 * their average */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int numberOfInputs;
	float *nums, numberSums, numberAverage = 0;

	printf("How many numbers do you want to enter? ");
	scanf("%d", &numberOfInputs);

	nums = malloc(numberOfInputs * sizeof(float));

	for (i = 0; i < numberOfInputs; i++) {
		printf("Enter the number #%d: ", i+1);
		scanf("%f", &nums[i]);

		numberSums += nums[i];
	}

	numberAverage = numberSums / numberOfInputs;

	printf("Average: %f\n", numberAverage);

	free(nums);

	return 0;
}
