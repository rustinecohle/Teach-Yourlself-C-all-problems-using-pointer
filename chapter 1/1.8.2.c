#include <stdio.h>

void func1(void);

int main(void)
{
    void (*pfunc)(void) = func1;
    pfunc();

    return 0;
}

void func1(void)
{
    printf("This is printed.");
    return; /* return with no values */
    printf("This is not printed.");
}