/* A program with two functions, called via a function pointer */
#include <stdio.h>

void func1(void);

int main(void)
{
    void (*pfunc)(void) = func1; /* function pointer */

    printf("I");
    pfunc();
    printf("C");

    return 0;
}

void func1(void)
{
    printf("like");
}//here i showed the use of function pointer