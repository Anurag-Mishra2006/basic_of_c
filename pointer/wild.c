// uninitialize pointers are known as wild pointers
//  these pointers point to some arbitrary location in memory and may cause a program to crash or behave badly
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 334;
    int *ptr; // this is a wild pointer pointing to any arbitraty location in memory
    // and when we will try to excess its value it gives us bugs
    *ptr = 33; // now this is no longer wild pointer
}