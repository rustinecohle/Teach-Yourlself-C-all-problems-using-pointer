/* This program has three functions, called via function pointers. */
#include <stdio.h>

void func1(void);
void func2(void);

int main(void)
{
    void (*pfunc2)(void) = func2;

    pfunc2();
    printf("3");

    return 0;
}

void func2(void)
{
    void (*pfunc1)(void) = func1;
    pfunc1();
    printf("2");
}

void func1(void)
{
    printf("1");
}