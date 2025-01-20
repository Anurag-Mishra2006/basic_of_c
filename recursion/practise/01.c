// write a program in c to print the elements of array using recursion 
#include<stdio.h>
void showelement(int arr[] ,int n, int idx){
     if(idx == n)return ;
     printf("%d ", arr[idx]);
     showelement(arr, n , idx+1);

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,11};
    int n = sizeof(arr)/4;
    int idx =0 ;
    showelement(arr,n, idx);
}