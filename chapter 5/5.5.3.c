#include <stdio.h>

int main(void)
{
    /* মূলে char text[80]={"When","in",...} ছিল -- এটা ভুল,
       একটা 1D char array-তে একাধিক string literal বসানো যায় না।
       আসলে এটা array of string pointers হওয়ার কথা ছিল */
    char *text[] = {
        "When", "in", "the",
        "course", "of", "human",
        "events", ""
    };

    int i, j;
    

    //now display them
    for (i = 0; text[i][0]; i++) // remember null to thake string er last e ekghane to nll nai tai ei true er bepare bebohar kkora hoise
    {
        for (j = 0; text[i][j]; j++)
        {
            printf("%c", text[i][j]);
            printf(" ");
        }
    }

    return 0;
}