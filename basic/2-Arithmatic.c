#include<stdio.h>

int main(){
    int x=51,y=22;
    printf("%d\n",x + y);
    printf("%d\n",x - y);
   printf("%d\n",x *y);
   printf("%d\n",x / y);

//    int z=x+y;
    float z=x+y;
    int m=x%y; //modulus operator is only for integer
    
    printf("when %d is divide by %d it give remainder : %d \n",x,y,m);
//    printf("Value of z is: %d",z);
    printf("Value of z is: %0.2f",z);//0.2 is used as it give 2 digit after the point 
}