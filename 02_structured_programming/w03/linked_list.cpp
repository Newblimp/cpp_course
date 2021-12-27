#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct list {int data; struct list *next;} list;

int is_empty(const list *l) { return (l == NULL); }

list* create_list(int d)
{
    list* head = (list *)malloc(sizeof(list));
    head->data = d;
    head->next = NULL;
    return head;
}

list* add_to_front(int d, list *h)
{
    list *head = create_list(d);
    head->next = h;
    return head;
}

list* array_to_list(int data[], int size)
{
    list *head = create_list(data[0]);
    int i = 1;
    for (i = 1; i < size; i++)
    {
        head = add_to_front(data[i], head);
    }
    return head;
}

void print_list(list *h)
{
    while (h != NULL)
    {
        printf("%d\t", h->data);
        h = h->next;
    }
    printf("\n\n");
}

int main(void)
{
    int SIZE = 5;
    int data[SIZE] = {1,2,3,4,5};
    list *head = NULL;
    head = array_to_list(data, SIZE);
    print_list(head);
    return 0;
}
