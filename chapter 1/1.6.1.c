/* This program converts Earth days into Jovian years (using pointers). */
#include <stdio.h>

int main(void)
{
    float e_days;
    float j_years;
    float *pe = &e_days;
    float *pj = &j_years;

    printf("Enter number of Earth days:");
    scanf("%f", pe);

    *pj = (*pe) / (365.0 * 12.0);

    printf("Equivalent Jovian years: %f", *pj);

    return 0;
}