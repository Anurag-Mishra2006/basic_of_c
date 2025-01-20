// Surface area of sphere = 4*3.14*r^2
#include<stdio.h>
int main(){
    int r ;
    printf("Enter the radius: ");
    scanf("%d",&r);
    float area=4*3.1415*r*r;
    printf("The area of sphere is %f",area);
    return 0;
}
