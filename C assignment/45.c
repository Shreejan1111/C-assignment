/* WAP to illustrate passing structure members to a function */

#include <stdio.h>

struct student {
	char name[20];
};

void printDetails(char name[]);

int main() {
	struct student stu;

	printf("Name of the student? ");
	gets(stu.name);

	printDetails(stu.name);

	return 0;
}

void printDetails(char name[]) {
	printf("Name: %s\n", name);
}
