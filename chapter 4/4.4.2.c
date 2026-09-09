#include <stdio.h>

int main(void)
{
    short int i;
    unsigned short int u;
    short int *pi = &i;
    unsigned short int *pu = &u;

    *pu = 33000;
    *pi = *pu;

    printf("%hd %hu", *pi, *pu);

    return 0;
}