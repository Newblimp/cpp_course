/* This function is a test to write out a fibonacci sequence
Nicolo Novello
25.12.2021*/

#include <stdio.h>

void fibonacci(int n)
{
    int F_old_old = 0, F_old = 1;
    int F_next = 0;
    printf("Step 1:\t%d\n", 0);
    printf("Step 2:\t%d\n", 1);
    for (int i = 3; i <= n; i++)
    {
        F_next = F_old_old + F_old;
        printf("Step %d:\t%d\n", i, F_next);
        F_old_old = F_old;
        F_old = F_next;
    }
}

int main(void)
{
    int x = 5;
    fibonacci(x);
    return 0;
}