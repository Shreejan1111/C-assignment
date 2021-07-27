#include <stdio.h>

int main(){
    int time,hours,minutes,seconds;
    printf("Enter the time in seconds: ");
    scanf("%d",&time);
    
    hours = time / 3600;
    minutes = (time - hours *3600)/60;
    seconds = (time - hours *3600 - minutes *60);
    
   printf("The time is %d hours %d minutes and %d seconds",hours,minutes,seconds);
    return 0;
}