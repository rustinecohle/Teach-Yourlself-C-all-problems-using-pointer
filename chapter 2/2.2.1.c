#include <stdio.h>

int main(void)
{
   int num;
   int *pnum=&num;
   scanf("%d", pnum);
   if(*pnum<0)
       printf("Number is negative");
   else
       printf("Number is non-negative");
}