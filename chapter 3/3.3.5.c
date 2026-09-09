#include <stdio.h>

int main(void)
{
    int i;
    int *pi = &i;

    /* মূল কোডে increment বাদ ছিল বলে infinite loop হতো, তাই (*pi)++ যোগ করা হলো */
    for (*pi = 0; *pi < 10; (*pi)++)
        printf("%d", *pi);

    return 0;
}