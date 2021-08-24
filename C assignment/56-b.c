/* WAP two individual program to write structure in file and read and display
 * structure from file */

#include <stdio.h>

int main() {
	FILE *inputStream;
	char inputFileName[10], lineRead[20];

	printf("Enter the filename you want to read the structure from: ");
	gets(inputFileName);

	inputStream = fopen(inputFileName, "r");
	while (fgets(lineRead, sizeof(lineRead), inputStream) != NULL) {
		printf("%s", lineRead);
	}

	fclose(inputStream);

	return 0;
}
