#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n); 
    int m=n;
    int count = 0;
    int sq=n*n;
    int sum = 0;
    while (n > 0)
    {
        n/= 10;
        count++;
    }
    n=m;
    float p =pow(10,count);
    int c= (int )p;
    if(n==(sq/c+ sq%c)){
        printf("%d is a keprekar number ",n);
    }
    else printf("%d is not a keprekar number ",n);
    
    
    
     
}