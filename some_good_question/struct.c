// write a program to print the details of those book whose price is less than  500 out of 100 books
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book{
    int price;
    char name[100];
    int page;
};
int main(){
    int n;
    printf("enter the number of books whose details are going to fill");
    scanf("%d" , &n);
    struct Book book[n];
    for(int i =0 ;i<n;i++){
        printf("name ");
        getchar();
        fgets(book[i].name , sizeof(book[i].name), stdin);
        book[i].name[strcspn(book[i].name, "\n")] = '\0'; 
        printf("price ");
        scanf("%d" ,&book[i].price);
         
        printf("number of pages ");
        scanf("%d", &book[i].page);
    }
    for(int i =0 ;i<n;i++){
        if(book[i].price<500){
            printf("book  name : %s   ", book[i].name);
            printf("number of pages : %d " , book[i].page);
        }
        printf("\n");
    }

}