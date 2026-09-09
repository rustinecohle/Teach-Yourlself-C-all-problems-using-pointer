#include <stdio.h>

int main(void)
{
    char ch;
    char *pch = &ch;

    fputs("Enter a character:", stdout);
    ch = getchar(); /* conio.h/getche() নেই Linux-এ, তাই getchar() */
    printf("\n Its ASCII code is %d", *pch);

    return 0;       
}