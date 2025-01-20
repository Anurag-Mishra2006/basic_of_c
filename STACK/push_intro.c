#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top ;
    int *arr;

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
    // struct stack s;
    // s.size=80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size*sizeof(int));

    struct stack *s;
    s->size=8 ;// -> operator ===  first dereferece and then do the dot operator

    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));

    // pushing an element manually 
    s->arr[0] = 7;
    s->top++;
    //check if stack is empty 
    if(isEmpty(s)){
        printf("the stack is empty");
    }
    else printf("the stack is not empty");


    // checking the stack is full
    if(isFull(s)){
        printf("stack overflow ");
    }
    else {
        s->top++;
        s->arr[s->top]= 15;
    }

    // checking whether the element is pushed or not
    printf("\nthe value which is added is : %d" , s->arr[1]);
    return 0;

}