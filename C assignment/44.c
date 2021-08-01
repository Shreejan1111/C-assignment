/* to create a student structure that has name, roll, marks, dob (where dob is
 * another structure having members year, month and day), phone as members.
 * Read member values from user and display the details of 5 students enerted
 * by user */

#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

struct student {
	char name[20];
	int roll;
	float marks;
	struct date dob;
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

	printf("Enter the date (year): ");
	scanf("%d", &stu.dob.year);

	printf("Enter the date (month): ");
	scanf("%d", &stu.dob.month);

	printf("Enter the date (day): ");
	scanf("%d", &stu.dob.day);

	printf("Enter the phone number: ");
	scanf("%lf", &stu.phone);

	/* Displaying data given by the user */
	puts("");
	printf("Name: %s\n", stu.name);
	printf("Roll: %d\n", stu.roll);
	printf("Marks: %.1f\n", stu.marks);
	printf("DOB: %d-%d-%d\n", stu.dob.year, stu.dob.month, stu.dob.day);
	printf("Phone: %.0lf\n", stu.phone);

	return 0;
}
