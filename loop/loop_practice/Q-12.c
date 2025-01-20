/*
Write a C program to find sum of first and last digit of a number
*/

#include<stdio.h>
int main(){
    int  l;
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    l=n%10;
    while(n>9){ 
        n/=10; 
    }
    int sum=l+n;
    printf("Sum of first digit & last digit:%d ",sum);
}