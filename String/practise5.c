// write a program in c to copy one string to another

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    char ans[100] ;
    int i =0 ;
    while(str[i] !='\0'){
        ans[i]= str[i];
        i++;
    }
    printf("Second string is %s", ans);
    
     
}