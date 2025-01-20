#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define pi 3.1415
double area(double , double);

int main(){
     
     double radius , height ;
     double (* area_func)(double , double); // here making area  pointer


     // declaring the pointer to function 
     area_func = area;

     // inputing the radius and height 
     printf("enter the radius and height of the cylinder respectively\n");
     scanf("%lf", &radius);
     scanf("%lf", &height);
     
     double area2 = area_func(radius , height );
     printf("the area of the cylinnder is : %lf ",area2 );

}
double area(double radius , double height){
    return pi * radius * height;
}