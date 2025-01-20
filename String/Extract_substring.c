/*
Write a program in C to extract a substring from a given string.

Test Data :
Input the string : this is test string
Input the position to start extraction :9
Input the length of substring :4
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    int n ,j;
    printf("Enter the position to start extraction : ");
    scanf("%d" ,&n);
    printf("Enter the length of substring ");
    scanf("%d", &j);
    printf("The substring retrieve from the string is : ");
    for(int i =n-1;i<n+j;i++){
        printf("%c" , str[i]);

    }
    
     
}