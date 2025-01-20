#include<stdio.h>
int main(){
    int n;
    printf("Enter a year: ");
    scanf("%d",&n);
    if(n%4==0 && (n%100!=0||n%400==0)){/*
    To be a leap year, the year number must be divisible by four – except for end-of-century years, which must be divisible by 400
    */
        printf("%d is a leap year",n);
    }
    
    else printf("%d is not a  leap year",n);
}