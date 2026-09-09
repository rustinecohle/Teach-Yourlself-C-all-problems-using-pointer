#include <stdio.h>

int main(void)
{
    char ch;
    char *pch = &ch;

    *pch = getchar();

    while (*pch != 'q')
        *pch = getchar();
    printf("Found the q.");

    return 0;
}