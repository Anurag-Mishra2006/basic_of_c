#include <stdio.h>

// NULL pointer is a pointer which a value reserved for indicating that the pointer or rerference does not refer to valid object.


// NULL macro is defined as ((void *)0 ) in header files of most of the c compiler implementations

int main() {

    int a = 32;
    int * ptr = &a;// storing the value of a in the ptr
    printf("%d --> address of a");
     ptr = NULL;
    printf("%d --> address of ptr");

    return 0;
}
