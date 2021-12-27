/*
    Prints a table of values for sine and cosine for argument values from 0 to 1
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    printf("\nValues for sin(x) and cos(x)\n");
    printf("\nx\t\t|\tsin(x)\t\t|\tcos(x)\n");
    printf("----------------------------------------------------------\n");
    for (double n = 10.0, i = 0; i <= 10; i++)
    {
        double x = i/n;
        printf("%lf\t|\t%lf\t|\t%lf\n", x, sin(x), cos(x));
    }
    return 0;
}