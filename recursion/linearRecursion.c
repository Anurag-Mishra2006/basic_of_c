// a linear recursive function is  a function that makes only a single call to itself each time the function runs 
#include <stdio.h>
int fact(int);


int main() {
 int n=5;
 printf("%d",fact(n));
 return 0;
 }

int fact(int n)
{
if(n<=1)
return 1;
else 
return n*fact(n-1);
}