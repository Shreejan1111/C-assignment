#include <stdio.h>

int main() {
	int num1, num2, a, b, temp, hcf, lcm;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	a = num1;
	b = num2;

	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	while (b > 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	hcf = a;
	lcm = (num1 * num2) / hcf;
	
	printf("HCF: %d, LCM: %d\n", hcf, lcm);

	return 0;
}
