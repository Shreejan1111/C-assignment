#include <stdio.h>


int is_prime(int number){
    int i;
    for (i=2;i<number;i++){
        if (number %i == 0){
            printf("Not Prime");
            return;
        }
    }printf("Prime");
}
int main(){
    int i,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    is_prime(number);
    return 0;
}