#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data1;  // Declare a union variable

    // Assigning values to union members
    data1.i = 10;  // Assign value to 'i'

    // Accessing union members
    printf("Integer: %d\n", data1.i);
    
    // Assign a different value
    data1.f = 3.14;  // Assign value to 'f'

    // Accessing union members again (only the last assigned value will be correct)
    printf("Float: %.2f\n", data1.f);
 
    // Assigning a value to 'c'
    data1.c = 'A';

    // Now, accessing the 'c' member
    printf("Character: %c\n", data1.c);

    return 0;
}