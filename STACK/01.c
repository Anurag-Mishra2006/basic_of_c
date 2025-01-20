// stack is a linear data structure
// follows LIFO or FILO dicipline
// used in function calls
/*
push()
pop()
peek(index)  
*/
// Stack Using an Array
// ->    fixed size array creation 
// ->     top element

#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top ;
    int *arr; // this is for the memory allocation of arr in heap

};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1)return 1;
    else return 0;
}

int isFull(struct stack *ptr){
    if(ptr->size-1 ==ptr->top)return 1;
    else return 0;
}
int main(){
    // struct stack s;// ae ek stack thi
    // s.size=80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size*sizeof(int));



    struct stack *s;// by this we are easily pass it to the function by reference
//  now after this ae ek dynamic ho gya


    s->size=2; // the maximum size of array that we want to allocate
    s->top = -1;// for empty stack



    s->arr = (int *)malloc(s->size*sizeof(int)); // here we are create array in the heap using malloc(size*sizeof(datatype))


    // pushing an element manually 
    s->arr[0] = 7;
    s->top++; // here we shift the top by 1 steps
    s->arr[2] = 8;
    s->top ++;

    // poping the element
        //  return s[s.top--]

    
    //check if stack is empty 
    if(isEmpty(s)){
        printf("the stack is empty");
    }
    else printf("the stack is not empty");


    if(isFull(s))printf("\nstack is full");
    return 0;

}
