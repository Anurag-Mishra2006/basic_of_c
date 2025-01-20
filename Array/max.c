#include<stdio.h>
int main(){
    int arr[]={1,2,3,45,6,7,8,99};
    int max=arr[0];
    for(int i=0;i<9;i++){
        if(max<arr[i])max=arr[i];
    }
    printf("MAX : %d ",max);
}