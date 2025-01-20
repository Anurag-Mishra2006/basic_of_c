#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int p=1;
    for(int i=0;i<9;i++){
        p=p*arr[i] ;
    }
    printf("%d ",p);
}