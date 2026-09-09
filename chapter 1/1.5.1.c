#include<stdio.h>
int main(){
    int a, b , c;
    scanf("%d %d %d", &a, &b, &c);
    int *pa = &a;
    int *pb = &b; 
    int *pc = &c;
    printf("%d", *pa / *pb);
    printf("\n%d", *pa % *pb);
    printf("\n%d", *pc / *pb);
    printf("\n%d", *pc % *pb);
    return 0;
// assign er shomoy asteric onno kisu mean kore ebong pent er shomoy derefence mean kore
}