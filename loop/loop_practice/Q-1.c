#include<stdio.h>
int main(){
    // 1. Write a C program to print all natural numbers from 1 to n. - using while loop
    int n,i=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i); 
        i++;
    }
}