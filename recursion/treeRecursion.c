// a function is called the tree recursion in which the function make more than one call to itself within the recursive function
#include <stdio.h>
int fibbonacci(int n) 
{
 if(n == 0){
 return 0;
 } 
 else if(n == 1) 
 {
 return 1;
 } 
 else 
 {
 return (fibbonacci(n-1) + fibbonacci(n-2));
 }
}
int main()
{
 int x=5,i;
 for(i=0;i<5;i++)
 printf("%d\t",fibbonacci(i));
 return 0;
}
 