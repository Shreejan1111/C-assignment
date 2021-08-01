/* Write a function that reads a float and integer number as arguments an return their product */

#include <stdio.h>

float productFloatAndInt(float num1, int num2);

int main() {
	float num1;
	int num2;
	float returnedProduct;

	printf("Enter a float and int number: ");
	scanf("%f %d", &num1, &num2);

	returnedProduct = productFloatAndInt(num1, num2);

	printf("Product: %f\n", returnedProduct);

	return 0;
}

float productFloatAndInt(float num1, int num2) {
	return num1 * num2;
}
