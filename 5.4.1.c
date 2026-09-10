#include <stdio.h>

int main(void)
{
    int ServerUsers[5][2] = {
        {1, 14},
        {2, 28},
        {3, 19},
        {4, 8},
        {5, 15}
    };
    int num;
    int (*pServerUsers)[2] = ServerUsers; /* আলাদা নাম pServerUsers */

    printf("Server\tUsers\n");
    printf("enter server number to look up:\n");
    scanf("%d", &num);

    for (int i = 0; i < 5; i++) {
        if (*(*(pServerUsers + i) + 0) == num) {   /* এখন { } দিয়ে if-এর সীমানা স্পষ্ট */
            printf("There are %d user on server %d.\n",
                   *(*(pServerUsers + i) + 1), *(*(pServerUsers + i) + 0));
            break;   /* break এখন if-এর ভেতরে -- শুধু match পেলেই থামবে */
        }
    }

    return 0;
}