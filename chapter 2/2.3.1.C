#include<stdio.h>
int main(void)
{
     float num;
    int choice;
    float *pnum = &num;
    int *pchoice = &choice;
 
    printf(" 1: Feet to Meters,2: Meters to Feet . ");
    printf("\nEnter choice: ");
    scanf("%d", pchoice);
 
    if (*pchoice == 1) {
        printf("Enter number of feet:");
        scanf("%f", pnum);
        printf("\nMeters: %f", (*pnum) / 3.28);
    } else {
        printf("Enter the number of meters: ");
        scanf("%f", pnum);
        printf("\nFeet: %f", (*pnum) * 3.29);
    }
}
 