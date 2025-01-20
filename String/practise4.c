// write a program to compare two string without using string library function

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
int main(){
    char str[100];
    char str2[100];
    printf("Enter the first string ");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("enter the second string ");
    fgets(str2 , sizeof(str2), stdin);
    str2[strcspn(str2 , "\n")]= '\0';
    
    bool flag = false; // firstly assumed  string are not equal 
    int i =0;
    
    int len1 =0;
    int len2 =0 ;
     while(str[i]!='\0'){
            len1++;
            i++;
        }
    i=0;
    while(str2[i]!='\0'){
            len2++;
            i++;
        }
    
    if(len1 == len2){
        flag=true;
    }
    i=0;
    while(str[i]!='\0'){
         if(str[i]!=str2[i]){
            flag =false;
            break;
        }
        i++;
    }
         
    
    if(flag)printf("string are equal");
    else printf("string are not equal");
}