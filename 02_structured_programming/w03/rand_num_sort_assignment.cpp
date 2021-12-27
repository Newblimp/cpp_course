#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} list;

list *add_to_front(int d, list *h)
{
    list *head = create_list(d);
    head->next = h;
    return head;
}

void print_list(list *h)
{
    int i = 0;
    while (h != NULL)
    {
        printf("%03d\t", h->data);
        h = h->next;
        if (!(++i % 5))
            printf("\n");
    }
}

void swap_nodes(list *h1, list *h2)
{
    if (h1->data > h2->data)
    {
        int temp = 0;
        temp = h1->data;
        h1->data = h2->data;
        h2->data = temp;
    }
}

int length_of_list(list *h)
{
    int i = 0;
    while (h != NULL)
    {
        i++;
        h = h->next;
    }
    return i;
}

void bubblesort(list *h)
{
    int len = 0;
    len = length_of_list(h) - 1;
    list *temp = h;
    for (; len > 0; len--)
    {
        h = temp;
        for (int i = 0; i < len; i++)
        {
            swap_nodes(h, h->next);
            h = h->next;
        }
    }
}

int main(void)
{
    srand(time_t(0));
    list *numbers;
    for (int i = 0; i < 100; i++)
    {
        numbers = add_to_front(rand() % 1000, numbers);
    }
    bubblesort(numbers);
    print_list(numbers);
    return 0;
}