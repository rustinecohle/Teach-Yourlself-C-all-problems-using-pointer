#include <stdio.h>

int main(void)
{
    int i;
    char j;
    int *pi = &i;
    char *pj = &j;

    *pi = 0;

    for (*pj = 1; *pj < 101; (*pj)++)
        *pi = *pj + *pi;

    printf("Total is: %d", *pi);

    return 0;
}