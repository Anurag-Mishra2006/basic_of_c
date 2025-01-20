#include<stdio.h>
int main(){
    float l,b,area,peri;
    printf("Enter the lenght of the rectangle ");
    scanf("%f",&l);
    printf("Enter the width ");
    scanf("%f",&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)printf("Area is greater than perimeter ");
    else if(peri>area)printf("Perimeter is greater than Area");
}   