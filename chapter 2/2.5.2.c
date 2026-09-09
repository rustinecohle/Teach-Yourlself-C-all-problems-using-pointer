#include <stdio.h>

int main(void)
{
    int i;
    int *pi = &i;

    *pi = 0;
    (*pi)++;
    printf(" %d\n", *pi); //prints 1
    (*pi)--;
    printf("%d", *pi); //prints 0
    return 0;
}