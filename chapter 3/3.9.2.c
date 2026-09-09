#include <stdio.h>
int main(void)
{
    char ch;
    char *pch = &ch;

    do {
        printf("\nEnter A/B/C/D/E caracter,q to quit:");
        *pch = getchar();
        printf("\n");

        switch (*pch) {
            case 'A':
                printf("now is");
                break;
            case 'S':
                printf("the timed");
                break;
            case 'M':
                printf("for all good men");
                break;
            case 'D':
                printf("the summer");
                break;
            case 'E':
                printf("solder");
                break;
        }
    } while (*pch != 'q');

    return 0;
}