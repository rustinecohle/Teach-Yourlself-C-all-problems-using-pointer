#include<stdio.h>
int main(void)
{
    int num1, num2;
    int *pnum1 = &num1, *pnum2 = &num2;

    printf("Enter first number:");
    scanf("%d", pnum1);
    printf("Enter second number:");
    scanf("%d", pnum2);

    if (*pnum2 == 0)
        printf("Cannot divide by zero.");
    else
        printf("Answer is: %d.", (*pnum1) / (*pnum2));
    return 0;
}
