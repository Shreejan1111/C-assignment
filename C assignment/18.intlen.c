#include <stdio.h>

int main(){
    int number;
    int counter = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while (number != 0){
        number /= 10;
        counter ++;
    }
    printf("The length of the number is %d",counter);
}
