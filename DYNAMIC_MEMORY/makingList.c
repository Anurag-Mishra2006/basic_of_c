#include<stdio.h>
#include<stdlib.h>
void sort(int arr [], int n);
int main(){
    int *ptr ;
    int n;
    printf("enter the length of your array ");
    scanf("%d" , &n);
    ptr = (int *)calloc(n , sizeof(int));
    printf("enter the elements of the array ");
    for(int i=0 ;i<n;i++){
        scanf("%d" ,&ptr[i]);
    }
    // now our list is formed
    for(int i=0 ;i<n;i++){
        printf("%d ", ptr[i]);
    }
    printf("\n\nafter sorting the array  ");

    sort(ptr , n);
   

}

// we can sort this formed list
void sort(int arr [] ,int n){
    for(int i =0 ;i<n-1 ;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i] += arr[j];
                arr[j]= arr[i] - arr[j];
                arr[i] = arr[i]- arr[j];
                
            }
        }
    }
    for(int i=0 ;i<n;i++){
        printf("%d ", arr[i]);
    }
}