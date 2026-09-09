#include <stdio.h>

int main(void)
{
    int answer;
    int *panswer = &answer;

    printf("What is 10+14?");
    scanf("%d", panswer); // important here 
    /* scanf("%d", panswer);   ঠিক — panswer নিজেই একটা address
    scanf("%d", *panswer);  ভুল — *panswer একটা int value, address না */
    // but in printf * must be used to get the value so scanf doesnt need the *

    if (*panswer == 10 + 14)
        printf("Right!");

    return 0;
}