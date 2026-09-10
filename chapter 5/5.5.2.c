//English to German translator

#include <stdio.h>
#include <string.h>

char words[][2][40] = {
    "dog", "Hund",
    "no", "nein",
    "year", "Jahr",
    "child", "Kind",
    "I", "Ich",
    "drive", "fahren",
    "house", "Haus",
    "to", "zu",
    "", ""
};

int main(void)
{
    char english[80];
    int i;
    char *penglish = english;
    int *pi = &i;

    printf("Enter English word: ");
    fgets(penglish, 80, stdin); /* gets() এর বদলে fgets() */
    penglish[strcspn(penglish, "\n")] = '\0';

    //look up the word
    *pi = 0;
    //search while null string not yet encountered
    while (strcmp(words[*pi][0], ""))
    {
        if (!strcmp(penglish, words[*pi][0]))
        {
            printf("German translation: %s", words[*pi][1]);
            break;
        }
        (*pi)++;
    }

    if (!strcmp(words[*pi][0], ""))
        printf("Not in dictionary\n"); /* মূলে "NOt"/"dictonary" টাইপো ছিল */

    return 0;
}