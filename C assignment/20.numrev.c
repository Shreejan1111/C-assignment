#include <stdio.h>

int main() {
    int number, new_number = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
       new_number = new_number * 10 + (number % 10);
        number /= 10;
    }
    printf("Reversed number = %d", new_number);
    return 0;
}