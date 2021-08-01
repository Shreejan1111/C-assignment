/* WAP to read a word and and find specified character entered by user in that
 * word */

#include <stdio.h>

int main() {
	int i;
	char inputString[10], searchChar;

	printf("Enter a string: ");
	gets(inputString);

	printf("Enter a char to search for: ");
	searchChar = getchar();

	for (i = 0; i < 10; i++) {
		if (inputString[i] == searchChar) {
			printf("Found at index #%d\n", i);
		}
	}

	return 0;
}
