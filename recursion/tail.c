#include <stdio.h>
void fun(int n)
{
    if(n==0)
        return;
    else
        fun(n-1);
        printf("%d\t",n);
}
int main()
{
    int x=5;
    fun(x);
}
 