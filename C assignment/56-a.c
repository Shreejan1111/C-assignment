/* WAP two individual program to write structure in file and read and display
 * structure from file */

#include <stdio.h>

struct studentDetail {
	char name[10];
	int age;
	float gpa;
};

int main() {
	struct studentDetail student1;
	FILE *destStream;
	char destFileName[10];

	printf("Enter the name: ");
	gets(student1.name);
	printf("Enter the age: ");
	scanf("%d", &student1.age);
	printf("Enter the gpa: ");
	scanf("%f", &student1.gpa);

	getchar();

	printf("Enter the filename you want to write the structure to: ");
	gets(destFileName);

	destStream = fopen(destFileName, "w");
	fprintf(destStream, "%s\n%d\n%f", student1.name, student1.age, student1.gpa);

	fclose(destStream);

	return 0;
}
