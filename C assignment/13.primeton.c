#include <stdio.h>


int is_prime(int number){
    int i;
    for (i=2;i<number;i++){
        if (number %i == 0){
            return 0;
        }
    } return 1;
}

int main(){
    int i,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (i=2;i<=number;i++){
        if (is_prime(i)==1){
            printf("%d,",i);
        }
    }

    return 0;
}