/* WAP to allocate space for array of integers using malloc(), calloc() and
 * free methods */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int noNums, *nums1Ptr, *nums2Ptr;

	printf("How many numbers would you like to store? ");
	scanf("%d", &noNums);

	nums1Ptr = malloc(noNums * sizeof(int));
	if (nums1Ptr == NULL) {
		printf("Error allocating memory\n");
		return 0;
	}
	printf("Successfully allocated memory for nums1\n");

	nums2Ptr = calloc(noNums, sizeof(int));
	if (nums2Ptr == NULL) {
		printf("Error allocating memory\n");
		return 0;
	}
	printf("Successfully allocated memory for nums2\n");

	free(nums1Ptr);
	free(nums2Ptr);

	return 0;
}
