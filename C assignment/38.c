/* WAP to read a string and search a specified word in the given string */

#include <stdio.h>

#define MAXLENGTH 20

int main() {
	char inputString[MAXLENGTH], searchString[MAXLENGTH];
	int i, j, inputLength = 0, searchLength = 0;
	int charMatched = 0, firstIndex, lastIndex;

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

	for (i = 0; i < inputLength; i++) {
		if (inputString[i] == searchString[0]) {
			charMatched = 1;
			firstIndex = i;
			lastIndex = i;
			for (j = 1; j < searchLength; j++) {
				if (searchString[j] == inputString[i+j]) {
					charMatched += 1;
					lastIndex = i+j;
				}
			}
			if (charMatched == searchLength) {
				printf("Found from index %d to %d\n", firstIndex, lastIndex);
			}
		}
	}

	return 0;
}
