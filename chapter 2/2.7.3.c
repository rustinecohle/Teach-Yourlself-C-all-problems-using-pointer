/*This program demonstrates the xor() function using pointers.*/
#include <stdio.h>

int xor(int *a, int *b);

int main(void)
{
    int p, q;
    int *pp = &p, *pq = &q;

    printf("enter P (0 or 1): ");
    scanf("%d", pp);
    printf("enter Q (0 or 1):");
    scanf("%d", pq);
    printf("P AND Q, %d\n", *pp && *pq);
    printf("P OR Q, %d\n", *pp || *pq);
    printf("P XOR Q, %d\n", xor(pp, pq));
    return 0;
}

int xor(int *a, int *b)
{
    return ((*a) || (*b)) && !((*a) && (*b));
}