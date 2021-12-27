/*  Distance of a marathon in yards
    Nicolo Novello
    Dec. 23, 2021
*/

#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;
    
    printf("Input miles: \n");
    scanf("%i", &miles);
    printf("Input yards: \n");
    scanf("%i", &yards);

    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %lf kilometers long.\n\n", kilometers);
    return 0;
}