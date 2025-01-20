/*
Write a C program to swap first and last digits of a number.
*/

#include<stdio.h>
int main(){
    int   l;
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    l=n%10;
    while(n>9){ 
        n/=10; 
    }
    int temp = l;
    l=n;
    n=temp;
     
    printf("first digit: %d & last digit:  %d ",n,l);
}