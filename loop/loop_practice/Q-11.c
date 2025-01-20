/*
Write a C program to find first and last digit of a number.
*/
#include<stdio.h>
int main(){
    int f, l;
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    l=n%10;
    while(n>9){ 
        n/=10; 
    }
    printf(" first digit: %d & last digit:  %d ",n,l);
}