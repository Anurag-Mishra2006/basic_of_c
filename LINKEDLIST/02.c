#include <stdio.h>
#include<stdlib.h>
// creating the struct of ll
struct Node{
    int data;
    struct Node *next;// self referencing struct
};

void transverLL(struct Node *head){
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
struct Node* deleteFirst(struct Node * head){
    struct Node * temp = head;
    head = head->next;
    free(temp);
    return head;
    
}

struct Node * deleteAtIndex(struct Node * head, int idx){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i =0 ;i<idx-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
} 
int main() {
    // creating ll 
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth= (struct Node *)malloc(sizeof(struct Node));
    // assinging the value to the ll
    head->data = 45;
    second->data = 5;
    third->data = 450;
    fourth->data = 4;

    // linking all the list node 
    head->next =second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    transverLL(head);

    printf("\n");
    head = deleteFirst(head);
    transverLL(head);
    
    printf("\n");
    head = deleteAtIndex(head,2);
    transverLL(head);
     
    return 0;
}