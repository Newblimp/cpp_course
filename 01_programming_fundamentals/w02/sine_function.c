#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 0.0, sin_x = 0.0;
    printf("Please input a value between 0 and 1: \n");
    scanf("%lf", &x);
    sin_x = sin(x);
    printf("sin(x) is %lf", sin_x);

    return 0;
}