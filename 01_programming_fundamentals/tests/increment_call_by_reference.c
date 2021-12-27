#include <stdio.h>

void increment(int * a, int b)
{
    *a += b;
}

int main()
{
    int a = 0, b = 5;
    printf("Before call-by-reference, a = %d\n", a);
    increment(&a, b);
    printf("After call-by-reference, a = %d\n", a);
    return 0;
}