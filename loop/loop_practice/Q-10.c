/*
Write a C program to count number of digits in a number.
*/
#include<stdio.h>
int main(){
    int n;
    int count =0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("%d" ,count);
}
