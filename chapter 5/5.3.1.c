#include <stdio.h>

int main(void)
{
    int bball[4][5];
    int i, j;
    int (*pbball)[5] = bball; /* 2D array-এর জন্য pointer to array of 5 ints */
    int *pi = &i, *pj = &j;

    for (*pi = 0; *pi < 4; (*pi)++)
    {
        for (*pj = 0; *pj < 5; (*pj)++)
        {
            printf("Quarter %d, player %d, ", *pi + 1, *pj + 1);
            printf("Enter number of points: ");
            scanf("%d", *(pbball + *pi) + *pj);
        }
    }

    //display results
    for (*pi = 0; *pi < 4; (*pi)++)
    {
        for (*pj = 0; *pj < 5; (*pj)++)
        {
            printf("Quarter %d, player %d, ", *pi + 1, *pj + 1);
            printf("%d\n", *(*(pbball + *pi) + *pj));
        }
    }

    return 0;
}