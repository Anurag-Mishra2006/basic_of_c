/*
Write a C program to find sum of all natural numbers between 1 to n.
*/
#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        sum=sum + i;
        i++;
    }
    printf("Sum: %d",sum);

}