
/* WAP that opens a file and copies all its content to another file. Your
 * program should read source and destination path from the user */

#include <stdio.h>

int main() {
	FILE *sourceStream, *destStream;
	char source[20], dest[20], fileChar;

	printf("Enter the source file: ");
	gets(source);

	printf("Enter the destination file: ");
	gets(dest);

	sourceStream = fopen(source, "r");
	destStream = fopen(dest, "w");

	if (sourceStream == NULL) {
		puts("Source file doesn't exist!");
	} else {
		puts("Source file exists, reading and writing to destination file...");
		while ((fileChar = fgetc(sourceStream)) != EOF) {
			fputc(fileChar, destStream);
		}
	}

	fclose(sourceStream);
	fclose(destStream);

	return 0;
}
