#include <stdio.h>

int main(void)
{
    int temp[31], i, min, max, avg;
    int days;
    int *ptemp = temp; /* array-এর নাম নিজেই প্রথম element-এর address */
    int *pi = &i, *pmin = &min, *pmax = &max, *pavg = &avg, *pdays = &days;

    printf("How many days in the month? ");
    scanf("%d", pdays);

    for (*pi = 0; *pi < *pdays; (*pi)++)
    {
        printf("Enter monday tempareture for day %d: ", *pi + 1);
        scanf("%d", ptemp + *pi); /* &temp[i] এর বদলে pointer arithmetic */
    }

    *pavg = 0;
    for (*pi = 0; *pi < *pdays; (*pi)++) *pavg = *pavg + *(ptemp + *pi);
    printf("Average temprature is %d\n", *pavg / *pdays);

    //find min max

    *pmin = 200;
    *pmax = 0;
    for (*pi = 0; *pi < *pdays; (*pi)++)
    {
        if (*pmin > *(ptemp + *pi)) *pmin = *(ptemp + *pi);
        if (*pmax < *(ptemp + *pi)) *pmax = *(ptemp + *pi);
    }

    printf("Minimum temparatre %d\n", *pmin);
    printf("Maxmimum temparature %d\n", *pmax);

    return 0;
}