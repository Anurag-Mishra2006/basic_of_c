// writting program to  print all the char of the string in the reverse order
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    int i =0 ;
    while(str[i+1] !='\0'){
        i++;
    }
    while(i>=0){
        printf("%c " ,str[i] );
        i--;
    }
}