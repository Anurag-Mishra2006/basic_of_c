// write program to count the total number of word in a string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str,"\n")]= '\0'; // replace the new line with the terminator of string
    int count =1;
    int i =0 ;
    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
            
        }
        i++;
    }
    printf("the number of words in the string is %d", count);
}