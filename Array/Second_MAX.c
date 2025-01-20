#include<stdio.h>
int main(){
    int arr[]={1,2,3,45,6,7,8,99};
    int max=arr[0];
    for(int i=0;i<8;i++){
        if(max<arr[i])max=arr[i];
    }
    printf("MAX : %d \n ",max);
    int secMax=-1;
    for(int i=0;i<8;i++){
        if(arr[i] !=max && secMax<arr[i] )secMax=arr[i];
    }
    printf("SECOND MAX : %d\n ",secMax);
}