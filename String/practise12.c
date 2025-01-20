// write a program in c to split string by space into words
// !!!! ERROR IS PRESENT IN THIS 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    // str[strcspn(str, "\n")] = '\0';
    char ans[100] ;
    int i =0 ;
    while(str[i] !='\0'){
        if(str[i]==' '){
            str[i]='\n';
        }
        ans[i]= str[i];
        i++;
    }
    printf("Strings or words after split by space are:\n%s", ans);
    
     
}