#include <stdio.h>
int main(void)
{
    int a, b, area;
    int *pa = &a, *pb = &b, *parea = &area;

    printf("Enter length:");
    scanf("%d", pa);
    printf("Enter width:");
    scanf("%d", pb);

    *parea = (*pa) * (*pb);
    printf("Area is %d", *parea);
    return 0;
}