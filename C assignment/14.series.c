#include <stdio.h>

int main(){
    
    int i,ending_num;
    printf("Enter the nth term for series: ");
    scanf("%d",&ending_num);
    for (i=1;i<=ending_num;i++){
        
        printf("%d/%d   ",i,i+1);
    }

    return 0;
}