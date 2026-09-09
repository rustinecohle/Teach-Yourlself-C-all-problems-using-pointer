#include <stdio.h>
int main(void)
{
    int a, b;
    char ch;
    int *pa = &a, *pb = &b;
    char *pch = &ch;

    printf("Do you want top :\n");
    printf("Add,Subtract,Multiply,Divide?\n");

    do {
        printf("Enter first letter:");
        *pch = getchar();
    } while (*pch != 'A' && *pch != 'S' && *pch != 'M' && *pch != 'D'); /* মূলে 'd' লোয়ারকেস ছিল, switch এর 'D' এর সাথে মিলছিল না */
    printf("\n");

    printf("Enter first number:");
    scanf("%d", pa);
    printf("Enter second number:");
    scanf("%d", pb);

    switch (*pch) {
        case 'A':
            printf("%d", *pa + *pb);
            break;
        case 'S':
            printf("%d", *pa - *pb);
            break;
        case 'M':
            printf("%d", *pa * *pb);
            break;
        case 'D':
            if (*pb != 0)
                printf("%d", *pa / *pb);
            break;
    }

    return 0;
}