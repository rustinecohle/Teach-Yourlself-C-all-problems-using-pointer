#include <stdio.h>

void o_to_c(int *x, int *result);

int main(void)
{
    int a, b;

    printf("Enter the value of ounce:");
    scanf("%d", &a);
    o_to_c(&a, &b);
    printf("The conversion in cups:%d", b);

    return 0;
}

void o_to_c(int *x, int *result)
{
    *result = 8 * (*x);
}