#include <stdio.h>
#include <string.h>

int main(void)
{
    // char str1[80], str2[80];
    // int i;
    // char *pstr1 = str1, *pstr2 = str2;
    // int *pi = &i;

    // printf("Enter the first string:");
    // fgets(pstr1, 80, stdin); /* gets() আধুনিক glibc-এ removed, fgets দিয়ে বদলানো হলো */
    // pstr1[strcspn(pstr1, "\n")] = '\0'; /* trailing newline সরানো */

    // printf("Enter the second string:");
    // fgets(pstr2, 80, stdin);
    // pstr2[strcspn(pstr2, "\n")] = '\0';

    // //see how long the string are
    // printf("%s is %d chars long\n", pstr1, (int)strlen(pstr1));
    // printf("%s is %d chars long\n", pstr2, (int)strlen(pstr2));

    // //compare the strings
    // *pi = strcmp(pstr1, pstr2);
    // if (!(*pi)) printf("The strings are equal.\n");
    // else if (*pi < 0) printf("%s is less than %s\n", pstr1, pstr2);
    // else printf("%s is greater than %s\n", pstr1, pstr2); /* মূলে ভুল করে "is less than" লেখা ছিল */

    // //concatenate str2 to end of str1 if there is enough room
    // if (strlen(pstr1) + strlen(pstr2) < 80)
    // {
    //     strcat(pstr1, pstr2);
    //     printf("%s\n", pstr1);
    // }

    // //copy str2 to str1
    // strcpy(pstr1, pstr2);
    // printf("%s %s\n", pstr1, pstr2);
    char str1[80], str2[80];
    char *pstr1 = str1, *pstr2 = str2;
    printf ("Enter the first string:");
    int count1=0;
    // fgets(pstr1, 80, stdin);
    // pstr1[strcspn(pstr1, "\n")] = '\0'; /* trailing newline সরানো */
    for (int i=0; i<80;i++){
        *(pstr1++)=getchar();
        if(*(pstr1-1)=='\n') break;
        count1++;
    }
    printf("Length of first string: %d\n", count1);
    int count2=0;
    printf ("Enter the second string:");
    for(int i=0; i<80;i++){
        *(pstr2++)=getchar();
        if(*(pstr2-1)=='\n') break;
        count2++;
    }
    printf("Length of second string: %d\n", count2);
    for(int i=0; i<count1 && i<count2;i++){
        if(*(pstr1+i)<*(pstr2+i)){
            printf("First string is less than second string\n");
            break;
        }
        else if(*(pstr1+i)>*(pstr2+i)){
            printf("First string is greater than second string\n");
            break;
        }
        else{
            if(i==count1-1 && count1<count2){
                printf("First string is less than second string\n");
                break;
            }
            else if(i==count2-1 && count2<count1){
                printf("First string is greater than second string\n");
                break;
            }
            else if(i==count1-1 && i==count2-1){
                printf("Both strings are equal\n");
                break;
            }
        }
    }
    return 0;
}