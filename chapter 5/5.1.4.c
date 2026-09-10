#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int item[100];
    // int a, b, t;
    // int count;
    // int *pitem = item;
    // int *pa = &a, *pb = &b, *pt = &t, *pcount = &count;

    // //read in numbers
    // printf("How many numbers?\n");
    // scanf("%d", pcount);

    // for (*pa = 0; *pa < *pcount; (*pa)++) scanf("%d", pitem + *pa);

    // //now sort them using a bubble sort
    // for (*pa = 0; *pa < *pcount; ++(*pa))
    // {
    //     for (*pb = *pcount - 1; *pb > *pa; --(*pb)) /* মূলে b>=a ছিল -> a=0,b=0 এ item[-1] আউট-অফ-বাউন্ড অ্যাক্সেস হতো */
    //     {
    //         //compare adjacent element
    //         if (*(pitem + *pb - 1) > *(pitem + *pb))
    //         {
    //             //exchange element
    //             *pt = *(pitem + *pb - 1);
    //             *(pitem + *pb - 1) = *(pitem + *pb);
    //             *(pitem + *pb) = *pt;
    //         }
    //     }
    // }

    // //display sorted list
    // for (*pt = 0; *pt < *pcount; (*pt)++)
    // {
    //     printf("\n%d", *(pitem + *pt));
    // }
    int item[100];
    int *pitem = item;// POINTER E ARRAY THAKLE ADDRESS LEKHAR KONO PROYOJON E  NAI AND RESET KORE KAMNE pitem=iten ; emne;
    printf("how many numbers?\n");
    int count;
    scanf("%d", &count);
    for(int i=0; i<count;i++){
        scanf("%d", pitem++);
    }
    pitem=item; //reset pointer to the start of the array
    for(int i=0; i<count; i++){
        for(int j=0; j<count-1;j++){
            int temp;
            if(*(pitem+j)>*(pitem+j+1)){
                temp=*(pitem+j);
                *(pitem+j)=*(pitem+j+1);
                *(pitem+j+1)=temp;
            }
            // if(*(pitem+j-1)>*(pitem+j)){
            //     int temp=*(pitem+j-1);
            //     *(pitem+j-1)=*(pitem+j);
            //     *(pitem+j)=temp;
            // }
        }
    }
    pitem=item; //reset pointer to the start of the array
    for(int i=0; i<count;i++){
        printf("\n%d", *(pitem+i)); // or *(pitem++)
    }
    return 0;
}