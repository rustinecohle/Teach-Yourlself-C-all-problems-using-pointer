//prime number tester
#include <stdio.h>
int main()

{
    int num;
    int *pnum = &num;
    int flag=0;
    scanf("%d", pnum);
    for(int i=2; i<=(*pnum)/2; i++){
        if(
            *pnum % i == 0
        )flag =1;

    }
    if(flag == 0) printf("Prime");
    else printf("Not Prime");

}
