#include<stdio.h>
int main(){
    int arr[]={1,2,34,5,6,67,8,99,10,45};
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    printf("Sum : %d ",sum);
    return 0;
}