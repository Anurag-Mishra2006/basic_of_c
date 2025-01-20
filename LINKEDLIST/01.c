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

struct Node *insertAtFirst(struct Node *head , int val){
    struct Node *temp =(struct Node*)malloc(sizeof(struct Node));
    temp->next =head;
    temp->data = val;
    head = temp; 
    return head;
}
//  
struct Node *insertAtIndex(struct Node*head , int val,int idx){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    int i =0;
    while(i<idx){
        temp = temp->next;
        i++;
    }
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    p->data = val;
    p->next = temp->next;
    temp->next = p;
    return head;
}

//  inserting at the end 
struct Node * insertAtEnd(struct Node* head, int val){
    struct Node* temp = head;
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    p->data = val;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = p;
    p->next = NULL;
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
    head = insertAtFirst(head , 12);
    transverLL(head) ;
    head = insertAtIndex(head , 20,3);
    printf("\n");
    transverLL(head);

    head = insertAtEnd(head , 200);
    printf("\n");
    transverLL(head);
    return 0;
}