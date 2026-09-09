#include <stdio.h>
int main(void)
{
    int i, j, k;
    int *pi = &i, *pj = &j, *pk = &k;

    for (*pi = 0; *pi < 3; (*pi)++)
        for (*pj = 0; *pj < 26; (*pj)++)
            for (*pk = 0; *pk < 2; (*pk)++)
                printf("%c", 'A' + *pj);

    return 0;
}