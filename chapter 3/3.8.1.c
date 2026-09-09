#include <stdio.h>
int main(void)
{
    int total, i, j;
    int *ptotal = &total, *pi = &i, *pj = &j;

    *ptotal = 0;
    do {
        printf("Enter next number (0 to stop):");
        scanf("%d", pi);
        printf("Enter number again:");
        scanf("%d", pj);

        if (*pi != *pj) {
            printf("Mismatch\n");
            continue;// porborti iteration e jabe
        }
        *ptotal += 1;
    } while (*pi);

    printf("Total is %d\n", *ptotal);

    return 0;
}