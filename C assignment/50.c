/* WAP to illustrate the use of enumerated data type */

#include <stdio.h>

enum day{
	sun,
	mon,
	tue,
	wed,
	thur,
	fri,
	sat
};

int main() {
	enum day today;

	today = sat;

	printf("Today is the #%d day of the week\n", today+1);

	return 0;
}
