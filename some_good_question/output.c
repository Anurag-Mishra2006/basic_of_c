#include<stdio.h>

void main(){
    int a[10] = {5,2,7,4,5,6,7,8,2,1};
    int *i = &a[2] , *j = &a[7]; // a[2] = 7; a[7] =8
    printf("%d %d " , j-i, *j-*i); //
}
