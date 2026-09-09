#include <stdio.h>

int main(void)
{
    int answer;
    int *panswer = &answer;

    printf("What is  10 + 14 ?\n");
    scanf("%d", panswer);

    if (*panswer == 10 + 14)
        printf("Right!");
    else {
        printf("Sorry. you're wrong .");
        printf("The answer is 24.");
    }

    return 0;
}