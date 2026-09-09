#include <stdio.h>
 
float compute(float *x);
 
int main(void)
{
    float weight;
 
    printf("Enter your weight:");
    scanf("%f", &weight);
 
    printf("Your effective weight on the moon is:%.2f", compute(&weight));
 
    return 0;
}
 
float compute(float *x)
{
    return (*x) * 0.17;
}
 