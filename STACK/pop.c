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
    struct stack *s;
    s->size=8 ; 
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    s->arr[0] = 7;
    s->top++;
    s->arr[1] = 17;
    s->top++;
    //check if stack is empty 
    if(isEmpty(s)){
        printf("the stack is empty");
    }

    else {
        int  val = s->arr[s->top];
        s->top = s->top-1;
        printf("the pop-out element is %d", val);
        return val;
        
    }

    

}