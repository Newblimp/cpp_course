#include<stdio.h>
#include<math.h>
void sin_cos();

int main(void)
{
    sin_cos();
    return 0;
}
void sin_cos()
{
    double i;
    printf("sine and cos table \n");
    for (i = 0; i <= 1; i += 0.1)
    {
        printf("% 1f\t", i);
    }
    for (i = 0; i <= 1; i += 0.1)
    {
        printf("%1f\t", sin(i));
    }
    for (i = 0; i <= 1; i += 0.1)
    {
        printf("%1f\t", cos(i));
    }
}