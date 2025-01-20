/*
Write a C program to calculate sum of digits of a number.
*/
#include<stdio.h>
int main(){
    int sum=0;
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
     
    while(n>0){  
        int digit=n%10; 
        sum+=digit;
        n/=10;
    }

    printf("Sum of digit %d ",sum);
}