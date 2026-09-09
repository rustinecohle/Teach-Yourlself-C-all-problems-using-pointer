#include <stdio.h>
int main(void)
{
    int num;
    float f;
    int *pnum = &num;
    float *pf = &f; // eta alada

    printf("Enter a integer: ");
    scanf("%d", pnum);

    printf("Enter a floating point number: ");
    scanf("%f", pf);

    printf("Integer is %d ", *pnum); // ekhane dereference kora 
    printf("\nFloat is %f", *pf);
    return 0;
}