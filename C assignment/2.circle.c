#include <stdio.h>
#define PI 3.14
int main(){

    int radius, area, circumference;
    printf("Enter the radius of circle:");
    scanf ("%d",&radius);
    area = PI *radius*radius;
    circumference = 2*PI*radius;
    printf("The area is: %d\n",area);
    printf("The circumference is: %d",circumference);
    return 0;
}