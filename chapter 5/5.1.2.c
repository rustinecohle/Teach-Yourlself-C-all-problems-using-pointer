#include <stdio.h>

int main(void)
{
    // int a1[10], a2[10];
    // int i;
    // int *pa1 = a1, *pa2 = a2, *pi = &i;

    // for (*pi = 1; *pi < 11; (*pi)++) *(pa1 + *pi - 1) = *pi;

    // for (*pi = 0; *pi < 10; (*pi)++) *(pa2 + *pi) = *(pa1 + *pi);

    // for (*pi = 0; *pi < 10; (*pi)++) printf(" %d\n", *(pa2 + *pi));


    int a1[10], a2[ 10];
    int *pa1= a1, *pa2 = a2;
    for (int i=0; i<10;i++){
        *(pa1++)=i;
    }
    pa1 = a1;  //reset must no * usable bcz this is the adrress
    for(int i=0; i<10;i++){
        *(pa2++)=*(pa1++);
    }


    // printf("a1: ");
    // for (int i=0; i<10;i++){
    //     printf("\n%d ", *(pa1-10+i));
    // }
    
    printf("a2: ");
    for (int i=0; i<10;i++){
        printf("\n%d ", *(pa2-10+i));
    }

    return 0;
}