#include <stdio.h>
int f1(int);
int f2(int);
int main() {
    int n=5;
    printf("the sum of first five natural numver is %d",f1(n));
    return 0;
}
int f1(int n)
{
    if(n==0)
        return n;
    else 
        return f2(n);
}
int f2(int x)
{
    return x + f1(x-1);
}