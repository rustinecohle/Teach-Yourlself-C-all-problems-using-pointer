#include <stdio.h>

int main(void)
{
    int num;
    int answer;
    int *panswer = &answer;
    int *pnum = &num;

    scanf("%d", pnum);
    for (int i = 0; i < *pnum; i++) {
        printf("what is %d + %d?\n", i, i);
        scanf("%d", panswer);
        if (*panswer == i + i)
            printf("Right!\n");
        else {
            printf("Sorry. you're wrong.\n");
            printf("The answer is %d .\n", i + i);
        }
    }
    return 0;
}