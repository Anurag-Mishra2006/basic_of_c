
/*
Write a C program to print multiplication table of any number.
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number  ");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        int c=n*i;
        printf("%d X %d = %d",n,i,c);
        printf("\n");
        i++;
    }
}