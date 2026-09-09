#include <stdio.h>

int main(void)
{
    int i;
    char ch;
    int *pi = &i;
    char *pch = &ch;

    for (*pi = 1; *pi < 1000; (*pi)++) {
        if (!(*pi % 6)) {
            printf("%d,more?(Y/N)", *pi);
            *pch = getchar();
            if (*pch == 'N')
                break;
            printf("\n"); /* মূল কোডে "prinitf" টাইপো ছিল */
        }
    }

    return 0;
}