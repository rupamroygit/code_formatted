#include<stdio.h>

void main ()
{
    //variable
    int num;
    //@printf for showing what type of input
    printf("Enter a Decimal Number\n:");
    //input from user
    scanf("%i",&num);

    //print the decimal value
    printf("Decimal Number: %i\n",num);
    //print the octal value
    printf("Octal Number: %o\n",num);
    //print the hexadecimal value
    printf("Hexadecimal Number: %X\n",num);


}