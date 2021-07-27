#include <stdio.h>

int main(){
    int a,b,c,greatest_num;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    greatest_num = a;
    if (b>a && b >c){
        greatest_num = b;
    }else if (c>a){
        greatest_num = c;
    }
    printf("The greatest numbers is %d",greatest_num);

    return 0;
}