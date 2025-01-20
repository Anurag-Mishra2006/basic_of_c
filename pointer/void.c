#include<stdio.h>
#include<stdlib.h>
//  a void pointer is a pointer that has no data type associated with it
//  a void pointer can be easily typecasted to any data type
// in dynamic memory allocation malloc() , calloc() return (void *)type pointer
// this allows these dynamic memory function to be used to allocate memory of any data type

int main(){
    int a = 57;
    float b = 55.3;
    void *ptr;
    ptr = &a;
    printf("the value of a is  : %d\n ", *( (int *)ptr));
    ptr = &b;
    printf("the value of b is  : %f\n ", *( ( float *)ptr));
}