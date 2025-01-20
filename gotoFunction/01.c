//go to statement is preferable when we to break multiple loops using a single statement at the same time 
#include<stdio.h>
int main(){
    lable:
        printf("we are inside the lable");
        // now here we use goto end to redirect it to the end 
        goto end;
        // now after this printing of hello world will skip
    printf("hello world\n");
    goto lable;// this throw infinite loop
    // 
    end : 
        printf("we are at the end");
}
