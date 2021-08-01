/* WAP to demonstrate different string in built functions */

#include <stdio.h>
#include <string.h>

int main() {
	char name[20] = "Mike";

	printf("Initially the value of `name` is %s\n", name);

	strcpy(name, "Safal");
	printf("After `strcpy()`, the value of `name` is %s\n", name);

	strcat(name, " Piya");
	printf("After `strcat()`, the value of `name` is %s\n", name);

	printf("Length of string in `name` is %lu\n", strlen(name));

	if (strcmp(name, "Mike")) {
		printf("The value of `name` is not `Mike`\n");
	} else {
		printf("The value of `name` is `Mike`\n");
	}

	return 0;
}
