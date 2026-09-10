#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80] = "I like C";
    char *pstr = str;

    strcpy(pstr, "hello");
    printf("%s", pstr); /* মূলে printf(str) ছিল -- format string bug/vulnerability */

    return 0;
}