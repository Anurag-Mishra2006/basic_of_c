#include<stdio.h>
int main(){
    int arr[]={23 ,56,87,12,54,7,6,56,45,21,97,30};
    for(int i=0;i<12;i++){
        if(arr[i]<35){
            printf("%d ",i);
        }
    }
}