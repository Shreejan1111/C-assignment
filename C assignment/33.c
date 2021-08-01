/* WAP that asks for n numbers from users and store them in array nad find
 * maximum and minimum number of them */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int numberOfInputs, *nums, numMax, numMin;

	printf("How many numbers do you want to enter? ");
	scanf("%d", &numberOfInputs);

	nums = malloc(numberOfInputs * sizeof(int));

	for (i = 0; i < numberOfInputs; i++) {
		printf("Enter the number #%d: ", i+1);
		scanf("%d", &nums[i]);

		if (i == 0) {
			numMax = nums[0];
			numMin = nums[0];
		} else {
			if (nums[i] > numMax) {
				numMax = nums[i];
			} else if (nums[i] < numMin) {
				numMin = nums[i];
			}
		}
	}

	printf("Maximum number: %d, Minimum number: %d\n", numMax, numMin);

	free(nums);

	return 0;
}
