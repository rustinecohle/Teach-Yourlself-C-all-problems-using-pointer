#include <stdio.h>

int main(void)
{
    char ch;
    char *pch = &ch;

    do {
        *pch = getchar();
    } while (*pch != 'q');

    printf("Found the q.");

    return 0;
}