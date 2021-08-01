/* WAP that illustrates use of local, global and static variables */

#include <stdio.h>

void process();

int global = 69;

int main() {
	int i, num = 10;

	printf("Here variable `num` with value %d is a local variable\n", num);
	printf("Also the variable `global` with value %d is accessible inside the main function \n", global);

	for (i = 0; i < 2; i++) {
		process();
	}

	return 0;
}

void process() {
	static int accessCount = 0;

	accessCount++;

	puts("");
	puts("We are inside the `process()` function now!");
	printf("You have accessed this function %d time(s)!\n", accessCount);
	puts("The counter variable `accessCount` is a static variable as it's value is preserved althought it was out of scope!");
	puts("Inside this function, you cannot access the 'num' variable declared in main function as it is a local variable!");
	printf("BUT the variable `global` with value %d is accessible inside this function too!\n", global);
}
