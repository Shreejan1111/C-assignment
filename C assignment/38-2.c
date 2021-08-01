/* WAP to read a string and search a specified word in the given string */

#include <stdio.h>

int main() {
	char inputString[10], searchString[10];
	int i = 0, j = 0, inputLength = 0, searchLength = 0;
	int charMatched = 0;

	printf("Enter a string: ");
	gets(inputString);

	printf("Enter phrase to search: ");
	gets(searchString);

	for (i = 0; inputString[i] != '\0'; i++) {
		inputLength += 1;
	}

	for (i = 0; searchString[i] != '\0'; i++) {
		searchLength += 1;
	}

	printf("Input string count: %d, Search phrase count: %d\n", inputLength, searchLength);

	for (i = 0; i < inputLength; i++) {
		if (inputString[i] == searchString[0]) {
			charMatched = 0;
			for (j = 0; j < searchLength; j++) {
				if (searchString[j] == inputString[i+j]) {
					charMatched += 1;
				}
			}
			if (charMatched == searchLength) {
				printf("FOUND!\n");
				return 0;
			}
		}
	}

	return 0;
}
