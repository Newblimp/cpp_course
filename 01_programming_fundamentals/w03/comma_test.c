/* This is to test the comma operator
Nicolo Novello
24.12.2021
*/

#include <stdio.h>

int main()
{
    int i = 10, j = 2, n = 0;
    n = i, j;
    printf("%d\n", n);
    n = i, j+1;
    printf("%d\n", n);
    printf("%d\n", j);
    return 0;
}