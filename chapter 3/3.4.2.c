#include <stdio.h>

int main(void)
{
    char ch;
    char *pch = &ch;

    printf("Enter your massage.\n");

    *pch = getchar();
    while (*pch != '\r') {
        printf("%c", *pch + 1);
        *pch = getchar();
    }

    return 0;
}