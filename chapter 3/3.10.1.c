#include <stdio.h>
int main(void)
{
    int i;
    int *pi = &i;

    *pi = 1;
again:
    printf("%d", *pi);
    (*pi)++;
    if (*pi < 10)
        goto again;

    return 0;
}