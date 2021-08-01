/* Create a structure named book having members name, no of pages and price.
 * WAP to read name, pages and price of 5 books using array of structure.
 * Display the name, no of pages and price of most expensive book among those
 * books */

#include <stdio.h>

struct book {
	char name[20];
	int pages;
	float price;
};

void printMostExpensive(struct book books[]);

int main() {
	struct book books[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("=== For book #%d ===\n", i+1);
		printf("Name of the book? ");
		gets(books[i].name);
		printf("Number of pages in the book? ");
		scanf("%d", &books[i].pages);
		printf("Price of the book? ");
		scanf("%f", &books[i].price);
		getchar();
	}

	puts("");
	printMostExpensive(books);

	return 0;
}

void printMostExpensive(struct book books[]) {
	int i, mostExpensiveCost = books[0].price, mostExpensiveIndex = 0;

	for (i = 1; i < 5; i++) {
		if (books[i].price > mostExpensiveCost) {
			mostExpensiveCost = books[i].price;
			mostExpensiveIndex = i;
		}
	}

	printf("=== Details of most expensive book ===\n");
	printf("Name: %s\n", books[mostExpensiveIndex].name);
	printf("Number of pages: %d\n", books[mostExpensiveIndex].pages);
	printf("Price: %.2f\n", books[mostExpensiveIndex].price);
}
