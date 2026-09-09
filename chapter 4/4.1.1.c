#include <stdio.h>

int main(void)
{
    unsigned u;
    long l;
    short s;
    unsigned *pu = &u;
    long *pl = &l;
    short *ps = &s;

    printf("Enter an unsigned:");
    scanf("%d", pu);   /* মূল বইতেই %d ব্যবহার করা হয়েছে ভুল specifier-এর উদাহরণ হিসেবে */
    printf("Enter a long:");
    scanf("%d", pl);
    printf("Enter a short:");
    scanf("%d", ps);

    printf("%u %ld %hd\n", *pu, *pl, *ps);

    return 0;
}