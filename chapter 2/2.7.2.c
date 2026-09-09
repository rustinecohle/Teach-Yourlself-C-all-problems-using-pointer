#include <stdio.h>

int main(void)
{
    int i, j;
    int *pi = &i, *pj = &j;

    printf("Enter first number: ");
    scanf("%d", pi);
    printf("Enter second number: ");
    scanf(" %d", pj);

    /* relational operations */
    printf("i < j %d\n", *pi < *pj);
    printf("i <= j %d\n", *pi <= *pj);
    printf("i == j %d\n", *pi == *pj);
    printf("i > j %d\n", *pi > *pj);
    printf("i >= j %d\n", *pi >= *pj);
    /* logical operations */
    printf("i && j %d\n", *pi && *pj);
    printf("i || j %d\n", *pi || *pj);
    printf("!i !j %d %d\n", !(*pi), !(*pj));
    return 0;
}