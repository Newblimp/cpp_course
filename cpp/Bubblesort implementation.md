# Bubblesort implementation
Samplecode for bubblesort implemented in C++:

```
#include <stdio.h>

void print_array(int how_many, int array[])
{
    printf("\n");
    for (int i = 0; i < how_many; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int how_many, int array[])
{
    for (int i = 0; i < how_many; i++)
    {
        print_array(how_many, array);
        for (int j = how_many - 1; j > i; j--)
        {
            if (array[j-1] > array[j])
            {
                swap(&array[j-1], &array[j]);
            }
        }
    }
}

int main(void)
{
    const int SIZE = 5;
    int data[SIZE] = {88, 72, 1, 0, 49};
    bubble_sort(SIZE, data);
    return 0;
}
```