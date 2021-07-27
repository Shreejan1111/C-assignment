#include <stdio.h>

int main(){
    int i,number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (i=number;i>=0;i=i--){
        printf("%d ",i);
    }
    for (i=1;i<=number;i++){
        printf("%d ",i);
    }
}