//  Write a C program to calculate product of digits of a number.
#include<stdio.h>
int main(){
    int product=1;
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
     
    while(n>0){  
        int digit=n%10; 
        product*=digit;
        n/=10;
    }

    printf("Sum of digit %d ",product);
}