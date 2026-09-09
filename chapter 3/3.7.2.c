#include <stdio.h>

int main(void)
{
    int i, j;
    int *pi = &i, *pj = &j;

    for (*pi = 1; *pi < 5; (*pi)++) {
        for (*pj = 0; *pj < 100; (*pj)++) {
            printf("%d", *pj);
            if (*pj == 5)
                break;
        }

        printf("\n");
    }

    return 0;
}