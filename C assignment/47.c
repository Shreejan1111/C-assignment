/* WAP to illustrate passing 5 student structures to a function and display
 * their details inside function */

#include <stdio.h>

struct student {
	char name[20];
	int roll;
};

void printDetails(struct student std[]);

int main() {
	struct student stu[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("=== For student #%d ===\n", i+1);
		printf("Name of the student? ");
		gets(stu[i].name);
		printf("Age of the student? ");
		scanf("%d", &stu[i].roll);
		getchar();
	}

	puts("");
	printDetails(stu);

	return 0;
}

void printDetails(struct student stu[]) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("=== Details of student #%d ===\n", i+1);
		printf("Name: %s\n", stu[i].name);
		printf("Age: %d\n", stu[i].roll);
	}
}
