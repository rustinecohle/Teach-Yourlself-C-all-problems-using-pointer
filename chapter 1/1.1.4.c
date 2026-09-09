#include <stdio.h>
int main(void)
{
    char ch;
    float f;
    double d;
    char *pch = &ch;
    float *pf = &f;
    double *pd = &d;

    ch = 'x';
    f = 100.123;
    d = 123.009;
    printf("Ch is %c. ", *pch);
    printf("f is %f. ", *pf);
    printf("d is %f", *pd);
    return 0;
}