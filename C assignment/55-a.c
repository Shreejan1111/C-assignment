/* WAP two individual program to write array in file and read and display array
 * from file */

#include <stdio.h>

int main() {
	int nums[5], i;
	FILE *destStream;
	char destFileName[10];

	for (i = 0; i < 5; i++) {
		printf("Enter number #%d: ", i+1);
		scanf("%d", &nums[i]);
	}

	getchar();

	printf("Enter the file name you want to write the array to: ");
	gets(destFileName);

	destStream = fopen(destFileName, "w");
	for (i = 0; i < 5; i++) {
		fprintf(destStream, "%d\n", nums[i]);
	}

	fclose(destStream);

	return 0;
}
