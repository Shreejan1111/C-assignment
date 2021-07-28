#include <stdio.h>

int main(){
    int i,number;
    int first_num = 0;
    int second_num =1;
    int new_num;
    printf("Enter the nth term for the series: ");
    scanf("%d",&number);
    printf("%d\n%d\n",first_num,second_num);
    
    for (i=0;i<number-2;i++){
        new_num = first_num + second_num;
        first_num = second_num;
        second_num = new_num;
        printf("%d\n",new_num);
    }
}
