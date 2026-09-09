#include <stdio.h>

int main(void)
{
    char *pstr = "\xA0 \xA1 \xA2 \xA3";
    printf("%s", pstr);

    return 0;
}