#include <stdio.h>
int main(void)
{
    int i;
    int *pi = &i;

    printf("Enter an integer:");
    scanf("%d", pi);

    for (; *pi; (*pi)--)
        printf("%d", *pi);

    return 0;
}