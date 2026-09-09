#include <stdio.h>

void f1(void);

int count; /* global count */

int main(void)
{
    int *pcount = &count; /* global count-এর ঠিকানা */

    *pcount = 10;
    f1();
    printf("count in main(): %d\n", *pcount);

    return 0;
}

void f1(void)
{
    int count; /* local count */
    int *pcount = &count;

    *pcount = 100;
    printf("count in f1():%d\n", *pcount);
    return;
}