#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,s,area;
    printf("Enter the three sides of a trainge:");
    scanf ("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of traingle is %d",area);

    return 0;
}