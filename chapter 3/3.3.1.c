#include <stdio.h>
int main(void)
{
    int i;
    char ch;
    int *pi = &i;
    char *pch = &ch;

    *pch = 'a';

    for (*pi = 0; *pch != 'q'; (*pi)++) {
        printf("pass: %d\n", *pi);
        *pch = getchar();
    }

    return 0;
}