#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the element of the array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d  ",arr[i]);
    }
    
}