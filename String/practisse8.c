// wap a program in c to read a sentence and replace lowercase char with uppercase and vice-versa
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    // converting lowercase to uppercase 
    int i =0 ;
    while(str[i]!='\0'){
         if(str[i]>='a' && str[i]<='z'){
            str[i] -=32;
         }  
         else if (str[i]==' ')str[i] =' ';
         else str[i] +=32;
        i++;
    }
    printf("After Case Change the sting is : %s" , str);
}