#include <stdio.h>

void outchar(char *ch);

int main(void)
{
    char a = 'A', b = 'B', c = 'C';

    outchar(&a);
    outchar(&b);
    outchar(&c);

    return 0;
}

void outchar(char *ch)
{
    printf("%c", *ch);
}