#include <stdio.h>

int main(void)
{
    /* মূল কোডে n1, n2-কে কখনো scanf করা হয়নি, তাই এগুলোর মান undefined/garbage থাকবে */
    int n1, n2;
    char ch;
    int *pn1 = &n1, *pn2 = &n2;
    char *pch = &ch;

    do {
        printf("Love,Save,Edit,Quit?\n");

        do {
            printf("Enter your selection:");
            *pch = getchar();
        } while (*pch != 'L' && *pch != 'S' && *pch != 'E' && *pch != 'Q'); /* মূলে 's ' (স্পেসসহ) টাইপো ছিল */

        if (*pch != 'Q') {
            printf("%d+%d=%d", *pn1, *pn2, *pn1 + *pn2);
        }
        if (*pch != 'Q') {
            printf("%d-%d=%d", *pn1, *pn2, *pn1 - *pn2);
        }

    } while (*pch != 'Q');

    return 0;
}