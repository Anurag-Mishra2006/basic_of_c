// write a program in c to seperate individual chars from the string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    // printf("%s" , str);
    int i =0;
    while(str[i]!='\0'){
        int ascii = (int)str[i];
        // printf("printing the ascii value of the chars\n");
        printf("%d -> %c\n" , ascii, str[i]);
        // printf("%c\n" , str[i]);
        

        
        i++;
    }
}