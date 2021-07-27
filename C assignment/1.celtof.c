#include <stdio.h>

int main(){
    int temp, f_temp;
    printf("Enter the temperature in celsius: ");
    scanf ("%d",&temp);
    f_temp = (temp *1.8) +32;
    printf("The temperautre in farenheit is %d",f_temp);
    return 0;


}