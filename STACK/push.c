#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int *arr;
    int top;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1)return 1;
    else return 0;
}

// isFull functionn
int isFull(struct stack *ptr){
    if(ptr->top  == ptr->size-1)return 1;
    else return 0;
}


void push(struct stack *ptr , int val){
    if(isFull(ptr)){
        printf("Stack overflow\n");

    }

    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}


// pop function 
void pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow\n");

    }

    else {

        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("\n%d" , val);
    }
}
int main(){
    int n  ;
    printf("enter the size of the stack ");
    scanf("%d" , &n);

    struct stack *s;
    s->size = n;
    s->top = -1;
    s->arr =(int *) malloc(s->size*sizeof(int));

    // s->arr[0]= 2;
    // printf("%d \n" , isEmpty(s));// this show 1 as we are not moving the top 
    // s->top++;


    printf("%d \n" , isEmpty(s)); // now this give false ie 0 
    printf("%d \n" , isFull(s));
    // now calling the ispush function
    push(s , 56);
    printf("%d \n" , isFull(s));// it is not full nor empty
    pop(s);
}