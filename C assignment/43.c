/* WAP to create a student structure that has name, roll, marks, age, phone as
 * members. Read member values from user and display the data entered by user
 * */

#include <stdio.h>

struct student {
	char name[20];
	int roll;
	float marks;
	int age;
	double phone;
};

int main() {
	struct student stu;

	/* Reading data from the user */
	printf("Enter the name: ");
	gets(stu.name);
	
	printf("Enter the roll: ");
	scanf("%d", &stu.roll);

	printf("Enter the marks: ");
	scanf("%f", &stu.marks);

	printf("Enter the age: ");
	scanf("%d", &stu.roll);

	printf("Enter the phone number: ");
	scanf("%lf", &stu.phone);

	/* Displaying data given by the user */
	puts("");
	printf("Name: %s\n", stu.name);
	printf("Roll: %d\n", stu.roll);
	printf("Marks: %.1f\n", stu.marks);
	printf("Age: %d\n", stu.roll);
	printf("Phone: %.0lf\n", stu.phone);

	return 0;
}
