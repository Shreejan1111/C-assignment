#include <stdio.h>

int main(){
    int integer;
    float floatingpoint;
    char character;

    printf("Enter an integer, a float and a character:");
    scanf("%d%f%c",&integer,&floatingpoint,&character);

    printf("Integer: %d",integer);
    printf("\nFloat: %f",floatingpoint);
    printf("\nCharacter: %c",character);

    return 0;
}