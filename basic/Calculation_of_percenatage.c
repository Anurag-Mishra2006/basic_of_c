#include<stdio.h>
int main() {
    printf("        Let's calculate your percentage\n");
    int sum=0,m1,m2,m3,m4,m5;
    printf("Enter your mark in physics: ");
    scanf("%d",&m1);// '&' is used to allocate the address 
    printf("Enter your mark in maths: ");
    scanf("%d",&m2);
    printf("Enter your mark in english: ");
    scanf("%d",&m3);
    printf("Enter your mark in chemistry: ");
    scanf("%d",&m4);
    printf("Enter your mark in optional subject: ");
    scanf("%d",&m5);
    sum=m1+m2+m3+m4+m5;
    float avg=sum/5.0 ; 
    printf("Your percentage is: %f ",avg);
    return 0;
}