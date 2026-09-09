#include <stdio.h>

int main(void)
{
    float num;
    int choice;
    float *pnum = &num;
    int *pchoice = &choice;

    printf("Enter value:");
    scanf("%f", pnum);

    printf("1:Feet to meters,2:Meters to Feet.");
    printf("Enter Choice:");
    scanf("%d", pchoice);

    if (*pchoice == 1)
        printf("%f", (*pnum) / 3.28);
    if (*pchoice == 2)
        printf("%f", (*pnum) * 3.28);

    return 0;
}