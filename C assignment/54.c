/* WAP to create file named inventory.txt and store the following data to that
 * file. Total price of each product should be calculated by program itsel and
 * also calculate the total price of all products at last. */

#include <stdio.h>

struct product {
	char name[10];
	int quantity;
	float rate;
	float total;
};

int main() {
	FILE *destStream;
	int i;

	struct product products[4] = {
		{ "AAA", 3, 1500.0, products[0].quantity * products[0].rate },
		{ "BBB", 10, 10.0, products[1].quantity * products[1].rate },
		{ "CCC", 23, 45.0, products[2].quantity * products[2].rate },
		{ "DDD", 8, 190.0, products[3].quantity * products[3].rate },
	};

	/* Writing into file */
	destStream = fopen("inventory.txt", "w");

	for(i = 0; i < 4; i++) {
		fprintf(destStream, "%s\t%d\t%f\t%f\n", products[i].name,
				products[i].quantity, products[i].rate, products[i].total);
	}

	fclose(destStream);

	return 0;
}
