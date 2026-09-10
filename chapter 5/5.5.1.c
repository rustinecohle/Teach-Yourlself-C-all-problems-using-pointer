#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[10][80];
    int i;
    int *pi = &i;

    for (*pi = 0; *pi < 10; (*pi)++)
    {
        printf("%d:", *pi + 1);
        fgets(text[*pi], 80, stdin); /* gets() এর বদলে fgets() */
        text[*pi][strcspn(text[*pi], "\n")] = '\0';
    }

    do {
        printf("Enter number of string (1-10) :");
        scanf("%d", pi);
        (*pi)--; //adjust value to match array index
        if (*pi >= 0 && *pi < 10) printf("%s\n", text[*pi]);
    } while (*pi >= 0);

    return 0;
}