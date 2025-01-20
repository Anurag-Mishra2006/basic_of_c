/*
Write a C program to find sum of all even numbers between 1 to n.
*/
#include<stdio.h>
int main(){
    int a=2,sum=0,n;
    printf("Enter the number ");
    scanf("%d",&n);
    while(a<=n){
        sum=sum+a;
        a+=2;
    }
    printf("Sum of even number is %d",sum);
}