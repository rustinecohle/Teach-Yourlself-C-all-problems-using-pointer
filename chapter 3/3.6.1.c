#include <stdio.h>

int main(void)
{
    int answer, count, chances, right;
    int *panswer = &answer, *pcount = &count, *pchances = &chances, *pright = &right;

    for (*pcount = 1; *pcount < 11; (*pcount)++) {

        printf("Enter the value of %d+%d=?", *pcount, *pcount);
        scanf("%d", panswer);

        if (*panswer == *pcount + *pcount)
            printf("you are right\n");
        else {
            printf("sorry!you are wrong.\ntry again.");

            *pright = 0;

            for (*pchances = 0; *pchances < 3 && !(*pright); (*pchances)++) {
                printf("what is %d+%d?", *pcount, *pcount);
                scanf("%d", panswer);

                if (*panswer == *pcount + *pcount) {
                    printf("You are right\n");
                    *pright = 1;
                }
            }
        }
    }
    return 0;
}