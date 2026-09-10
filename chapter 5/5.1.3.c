#include <stdio.h>

int main(void)
{
    // char mess[80];
    // int i;
    // char *pmess = mess;
    // int *pi = &i;

    // printf("Enter message (less than 80 characters) \n");
    // for (*pi = 0; *pi < 80; (*pi)++)
    // {
    //     *(pmess + *pi) = getchar(); /* conio.h/getche() Linux-এ নেই */
    //     if (*(pmess + *pi) == '\n') break; /* Linux Enter '\n' পাঠায়, '\r' না */
    // }
    // printf("\n");

    // for (*pi = 0; *(pmess + *pi) != '\n'; (*pi)++) printf("%c", *(pmess + *pi) + 1);
    char arr[80];
    char *parr = arr;
    for(int i=0; i<80;i++){
        *(parr++)=getchar();
        if(*(parr-1)=='\n') break;
    }
    parr=arr;
    for(int i=0; i<80; i++){
        printf("%c", *(parr+i)+1);
    }
    return 0;
}