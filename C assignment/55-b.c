/* WAP two individual program to write array in file and read and display array
 * from file */

#include <stdio.h>

int main() {
	int nums[5], i;
	FILE *inputStream;
	char inputFileName[10], lineRead[20];

	printf("Enter the file name you want to read array from: ");
	gets(inputFileName);

	inputStream = fopen(inputFileName, "r");

	while (fgets(lineRead, sizeof(lineRead), inputStream) != NULL) {
		printf("%s", lineRead);
	}

	fclose(inputStream);

	return 0;
}
