#include <stdio.h>
int main(void)
{
    int a, b;
    char ch;
    int *pa = &a, *pb = &b;
    char *pch = &ch;

    printf("Do you want to:\n Add,Subtract,Multiply or Divide?\n Enter first letter:");

    *pch = getchar();

    printf("Enter first number: ");
    scanf("%d", pa);
    printf("Enter second number: ");
    scanf("%d", pb);

    if (*pch == 'A') printf("%d,", *pa + *pb);
    if (*pch == 'S') printf("%d", *pa - *pb);
    if (*pch == 'M') printf("%d", *pa * *pb);

    if (*pch == 'D' && *pb != 0) printf("%d", *pa / *pb);

    return 0;
}