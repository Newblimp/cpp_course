/*
    Conversion of Farenheit to Celsius

    C = (F - 32)/1.8)
    Nicolo Novello
    Dec. 23, 2021
*/

#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;

    printf("Please enter fahrenheit as an ineger: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8; // note conversion
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
    return 0;
}