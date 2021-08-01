/* WAP to resize the string "Hello World" with new string "Hello Prime college
 * students" using dynamic memory allocation */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char *msgPtr;
	int i, oldTextLen, newTextLen;

	/* Old and new text literals */
	char oldText[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	char newText[] = {'H', 'e', 'l', 'l', 'o', ' ', 'P', 'r', 'i', 'm', 'e',
		' ', 'c', 'o', 'l', 'l', 'e', 'g', 'e', '\0'};

	/* Length of old and new text */
	oldTextLen = sizeof(oldText) / sizeof(oldText[0]);
	newTextLen = sizeof(newText) / sizeof(newText[0]);

	/* Allocating memory for old text */
	msgPtr = malloc(oldTextLen * sizeof(char));

	/* Filling up msg pointer with old text */
	for (i = 0; i < oldTextLen; i++) {
		msgPtr[i] = oldText[i];
	}

	/* Printing msg pointer with old text */
	printf("Old message: %s\n", msgPtr);

	/* Reallocating msg pointer for new text */
	msgPtr = realloc(msgPtr, newTextLen);

	/* Filling up msg pointer with new text */
	for (i = 0; i < newTextLen; i++) {
		msgPtr[i] = newText[i];
	}

	/* Printing msg pointer with new text */
	printf("New message: %s\n", msgPtr);

	/* Freeing up msg pointer */
	free(msgPtr);

	return 0;
}
