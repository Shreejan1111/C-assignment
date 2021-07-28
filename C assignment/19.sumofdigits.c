#include <stdio.h>

int main(){
    int number;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while (number != 0){
        sum += number %10;
        number /= 10;
    }
    printf("The length of the number is %d",sum);
}
