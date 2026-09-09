#include <stdio.h>
int main(void)
{
    int num;
    int *pnum = &num;

    //*pnum = 100;
    num = 100;
    printf("The number is %d.", *pnum);
    return 0;
}