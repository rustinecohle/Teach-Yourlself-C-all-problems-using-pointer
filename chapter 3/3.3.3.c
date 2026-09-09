#include <stdio.h>

int main(void)
{
    char ch;
    char *pch = &ch;

    for (*pch = getchar(); *pch != 'q'; *pch = getchar());
    printf("Found the q.");

    return 0;
}