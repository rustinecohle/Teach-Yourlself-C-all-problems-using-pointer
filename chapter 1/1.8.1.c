#include<stdio.h>
int sqr(int *p){
    return (*p)*(*p);
}


int main(){
    int num;
    printf("enter a number" );
    scanf("%d",&num);
    printf("the square of the number is %d",sqr(&num)); 
    return 0;

}
