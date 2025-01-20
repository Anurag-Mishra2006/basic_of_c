#include <stdio.h>

int main() {
    int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%u  %u" , a+1 ,&a +1);

    return 0;
}
//  %u format specifier used in the printf() function to print an unsigned integer
//  a+1 "this expression refers to the memory adddress of the second row of the 2D array"
//  in c when you do pointer arithmetic on  a 2D array like a , a is a pointer to the first row 
        // adding 1 to this pointer gives you a pointer to the second row 

        //  &a+1 : " the &a expression gives you the address of the entire 2D array . When you add  1  to &a , you are moving past the entire 2D array . 
                // i.e adding 1 to &a moves the pointer to the memory location just after the entire array"