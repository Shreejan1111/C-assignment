/* WAP to illustrate passing entire structure to a function */

#include <stdio.h>

struct student {
	char name[20];
	int roll;
};

void printDetails(struct student std);

int main() {
	struct student stu;

	printf("Name of the student? ");
	gets(stu.name);
	printf("Age of the student? ");
	scanf("%d", &stu.roll);

	puts("");
	printDetails(stu);

	return 0;
}

void printDetails(struct student stu) {
	printf("Name: %s\n", stu.name);
	printf("Age: %d\n", stu.roll);
}
