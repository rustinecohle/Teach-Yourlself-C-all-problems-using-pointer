#include <stdio.h>

int power(int *m, int *e);

int main(void)
{
    int m, e;
    int *pm = &m, *pe = &e;
    int a, b, c, d;

    *pm = 2;
    *pe = 3;
    printf("%d to the %d is %d\n", *pm, *pe, power(pm, pe));

    a = 4; b = 5;
    printf("4 to the 5th is %d\n", power(&a, &b));

    c = 3; d = 3;
    printf("3 to the 3rd is %d\n", power(&c, &d));

    return 0;
}

int power(int *m, int *e)
{
    int temp;
    int *ptemp = &temp;

    *ptemp = 1;
    for (; *e > 0; (*e)--)
        *ptemp = (*ptemp) * (*m);

    return *ptemp;
}