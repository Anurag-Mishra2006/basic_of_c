#include<stdio.h>// here we are including the standard library
// but we can also include our local file
// #include "../01.c"// .. by this we are getting out of the current directory and then give location of 01.c file
// by this we include 01.c file as it is


#define PI 3.14

#define SQUARE(r) r*r

// macro
#include <stdio.h>
// example of multiline macros
#define max(a,b,c)	if((a>b)&&(a>c))\
                   		 printf("%d",a);\
                    		else\
                    		if((b>a)&&(b>c))\
                    		printf("%d",b);\
                    		else\
                    		printf("%d",c);


int main(){ // 
    float var =PI;
    printf("the value of var is %.2f\n", var);
    float r =9.89;
    float area = PI * SQUARE(r);
    printf("the area of the circle is %f\n" , area);
    int a = 9 , b = 2 , c =90;
    max(a,b,c);
}