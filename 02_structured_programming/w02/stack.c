#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100
#define EMPTY -1
#define FULL (MAX_LENGTH -1)

typedef struct {char s[MAX_LENGTH]; int top;} stack;

void reset(stack *stk) {stk->top = EMPTY;}

void push(stack *stk, char c)
{
    stk->top++;
    stk->s[stk->top] = c;
}

char pop(stack *stk) {return (stk->s[stk->top--]);}
char top(const stack *stk) {return (stk->s[stk->top]);}

int is_empty(const stack *stk) {return (stk->top == EMPTY);}
int is_full(const stack *stk) {return (stk->top == FULL);}

int main(void)
{
    stack test_stack;
    char *s = "test string";
    reset(&test_stack);
    int i = 0;
    while (s[i] != '\0')
    {
        push(&test_stack, s[i++]);
    }
    while (!is_empty(&test_stack))
    {
        printf("%c", pop(&test_stack));
    }
    printf("\n\n");
    return 0;
}