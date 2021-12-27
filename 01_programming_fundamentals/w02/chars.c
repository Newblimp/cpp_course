/*
    testing some  chars
*/

#include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("a is equal to ASCII #%d\n", c);
    printf("a is equal to char #%c\n", c);
    printf("Adding one to c results in %c,%c,%c.\n", c, c+1, c+2);
    printf("This is a test to see if a bell rings %c, %c, %c.", '\a', '\a', '\a');
    
    return 0;
}