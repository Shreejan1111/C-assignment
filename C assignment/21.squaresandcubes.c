#include <stdio.h>

int main(){
    int i,number;
    printf("Enter the nth term: ");
    scanf("%d",&number);
    printf("The squares are: ");
    for (i=1;i<= number;i++){
        printf("%d  ",i*i);
    }
    puts("\n");
    printf("The cubes are: ");
    for (i=1;i<= number;i++){
        printf("%d  ",i*i*i);
    }
}