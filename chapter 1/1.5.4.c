#include <stdio.h>
int main(void)
{
    int i;
    int *pi = &i;

    i=19;
    *pi = -(*pi); // changes the sign
    printf("This is i:%d", *pi);
    return 0;
}