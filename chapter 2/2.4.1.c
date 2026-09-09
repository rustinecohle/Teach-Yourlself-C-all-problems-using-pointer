#include <stdio.h>

int main(void)
{
    int answer, count;
    int *panswer = &answer, *pcount = &count;

    for (*pcount = 1; *pcount < 11; *pcount = *pcount + 1) {
        printf("What is %d + %d?\n", *pcount, *pcount);
        scanf("%d", panswer);

        if (*panswer == *pcount + *pcount)
            printf("Right!\n");
        else {
            printf("Sorry. you're wrong.\n");
            printf("The answer is %d .\n", *pcount + *pcount);
        }
    }
    return 0;
}