/* WAP to sort array of integers in ascending and descending order */

#include <stdio.h>

#define ARRAYLENGTH 8

void sortArrayAscending(int *array);
void sortArrayDescending(int *array);
void swapindex(int *array, int swapToIndex, int swapFromIndex);
void printArray(int *array);

int main() {
	int nums[] = {65, 45, 23, 44, 3, 65, 78, 13};

	printf("Original array:\t\t\t");
	printArray(nums);

	sortArrayAscending(nums);
	printf("Sorted array (Ascending):\t");
	printArray(nums);

	sortArrayDescending(nums);
	printf("Sorted array (Descending):\t");
	printArray(nums);

	return 0;
}

void sortArrayAscending(int *array) {
	int i, j, smallestIndexTemp;

	for (i = 0; i < ARRAYLENGTH; i++) {
		smallestIndexTemp = i;
		for (j = i; j < ARRAYLENGTH; j++) {
			if (array[j] < array[smallestIndexTemp]) {
				smallestIndexTemp = j;
			}
		}
		swapindex(array, smallestIndexTemp, i);
	}

}

void sortArrayDescending(int *array) {
	int i, j, largestIndexTemp;

	for (i = 0; i < ARRAYLENGTH; i++) {
		largestIndexTemp = i;
		for (j = i; j < ARRAYLENGTH; j++) {
			if (array[j] > array[largestIndexTemp]) {
				largestIndexTemp = j;
			}
		}
		swapindex(array, largestIndexTemp, i);
	}

}

void swapindex(int *array, int swapToIndex, int swapFromIndex) {
	int tempSwap;

	tempSwap = array[swapToIndex];
	array[swapToIndex] = array[swapFromIndex];
	array[swapFromIndex] = tempSwap;
}

void printArray(int *array) {
	int i;

	for (i = 0; i < ARRAYLENGTH; i++) {
		printf("%d\t", *(array+i));
	}
	puts("");
}
