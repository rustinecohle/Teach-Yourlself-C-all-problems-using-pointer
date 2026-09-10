#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char command[80];
    int i, j;
    char *pcommand = command;
    int *pi = &i, *pj = &j;

    for (;;) // অবিরাম চলবে, যতক্ষণ না "quit"
    {
        printf("Operation? ");
        scanf("%s", pcommand);

        if (!strcmp(pcommand, "quit")) break; // এটা একটা standalone if, নিজেই সম্পূর্ণ

        scanf("%d %d", pi, pj); // দুটো সংখ্যা নেওয়া

        if (!strcmp(pcommand, "add"))          // নতুন, আলাদা if-else chain শুরু
            printf("%d\n", *pi + *pj);
        else if (!strcmp(pcommand, "subtract"))
            printf("%d\n", *pi - *pj);
        else if (!strcmp(pcommand, "divide"))
            printf("%d\n", *pi / *pj);
        else if (!strcmp(pcommand, "multiply"))
            printf("%d\n", *pi * *pj);
        else
            printf("Unknown command\n");
    }

    return 0;
}