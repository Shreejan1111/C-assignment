/* WAP to write even numbers between 10 and 50 to a file named EvenNumbers.txt */

#include <stdio.h>

int main() {
	FILE *destStream;
	int i;
	char numStr[2];

	destStream = fopen("EvenNumbers.txt", "w");
	for (i = 10; i <= 50; i++) {
		if (i % 2 == 0) {
			fprintf(destStream, "%d\n", i);
		}
	}

	fclose(destStream);

	return 0;
}
