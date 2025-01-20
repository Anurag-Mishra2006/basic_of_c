#include <stdio.h>
void fun(int n)
{
    if(n==0)
        return;
    else
        printf("%d\t",n);
        return fun(n-1);
}
int main()
{
    int x=5;
    fun(x);
}
