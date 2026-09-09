#include <stdio.h>
int main(void)
{
    char ch;
    char *pch = &ch;

    printf("Enter the latter:");
    *pch = getchar();

    switch (*pch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("is a vowel\n");
            break;
        default:
            printf("is a consonant");
    }

    return 0;
}