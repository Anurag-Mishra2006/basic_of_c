#include<stdio.h>
#include<string.h>
int main(){
    char arr[5]={'a','b','c','e','s'};
    // String is a character array 

    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    // Char take 1bit in store in the memory

    // printf("%c\n",arr[0]);

    // null character = '\0' ;
    // >>>. Ascii value of null character is 0
    char brr[]={'a','b','c','e','s','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c\n",brr[i]);
        i++;
    }

    // when '\0' is in array it become string
    int j=0;
    char crr[]="AnuragMishra";
    while(arr[j] !='\0'){
        printf("%c\n",crr[j]);
        j++;
    }

    return 0;
}

 
