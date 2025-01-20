#include <stdio.h>
#include<stdlib.h>

int main() {
// a pointer pointing to the free memory location or the location whose content has been deleted

//    dangling pointers arise during objects destruction when an object that has an incoming reference is deleted or deallocated without modifying the value of pointer 

// CAUSE  OF DANGLING POINTER -->
            //  deallocation of memory 
            //  returning local variable in function call
            //   variable going out of scope
    
    char *str = "hey , everyone";
    int n;
    int *ptr = (int *)malloc(n*sizeof(int));
    free(ptr); // ptr now become dangling pointer
    
    //  when variable going out of scope
    int *ptr2;
    {
        int i =12;
        ptr2 = &i;
    }

    printf("%d", *ptr2); // ptr is now a danglling pointer

    
    return 0;
}
