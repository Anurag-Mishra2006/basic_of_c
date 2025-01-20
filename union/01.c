//  it is also a user-defined data type that allows multiple variable to share the same memory location
// this mean that a union can hold one value at a time

#include <stdio.h>

union Data{
    int i ;
    float f;
    char c;
};
int main() {
    union Data data1;
    union Data *ptr = &data1; // pointer to union 
    /// Assign value to union member using the pointer
    ptr->i =10;
    printf("interger : %d\n",ptr->i);
    

    ptr->f = 3.23;
    printf("float : %f\n", ptr->f);
    return 0;
}