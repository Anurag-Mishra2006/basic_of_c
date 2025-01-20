/*
Write a C program to enter a number and print its reverse
*/
#include<stdio.h>
int  main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n>0){
        int r=n%10;
        printf("%d",r);
        n/=10;
        return 0;
    }
}