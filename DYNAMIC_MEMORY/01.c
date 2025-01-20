// the memory allocation happen as 
        /*
                HEAP
                STACK
                DATA SEGMENT -> GLOBAL AND STATIC VARIABLE
                CODE SEGMENT
        */

    // malloc() initialize to garbage values -->
    // calloc() initialize to 0

    
#include<stdio.h>
#include<stdlib.h>
int main(){
    // dynamic allocation 

    // use of malloc()
    // int *ptr ;
    // ptr = (int *) malloc(3*sizeof(int) );
    // // fflush(stdin);
    // for(int i =0 ;i<3;i++){
    //     // fflush(stdin);
    //     printf("Enter the value no %d of this array is",i);
    //     scanf("%d" , &ptr[i]);
    // }

    // for(int i =0 ;i<3;i++){
    //     // fflush(stdin);
    //     printf("  the value at %d of this array is %d\n",i,ptr[i]);
    // }


    // USE OF CALLOC().

    int *ptr ;
    ptr = (int *) calloc(3 , sizeof(int));
    // fflush(stdin);
    for(int i =0 ;i<3;i++){
        // fflush(stdin);
        printf("Enter the value no %d of this array is",i);
        scanf("%d" , &ptr[i]);
    }

    for(int i =0 ;i<3;i++){
        // fflush(stdin);
        printf("  the value at %d of this array is %d\n",i,ptr[i]);
    }
    
    // USE OF REALLOC()
    int n;
    printf("Enter the size of the new array you want to create\n");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr ,n*sizeof(int));
    for(int i =0 ;i<n;i++){
        printf("Enter the value  no %d of the array\n",i);
        scanf("%d" ,&ptr[i]);
    }
    for(int i =0 ;i<n;i++){
        printf("  the value at    %d of the array is %d\n",i, ptr[i]);
         
    }

    free(ptr); // free the memory of the old memory used

}