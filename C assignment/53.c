/* WAP to read only odd numbers from a file having numbers 1 to 100 */

#include <stdio.h>

int main() {
	FILE *numsFileStream;
	char fileLine[4];
	int lineInt;

	numsFileStream = fopen("nums.txt", "r");
	while (fgets(fileLine, sizeof(fileLine), numsFileStream) != NULL) {
		sscanf(fileLine, "%d", &lineInt);
		if (lineInt % 2 == 1) {
			printf("%d\n", lineInt);
		}
	}

	fclose(numsFileStream);

	return 0;
}
