#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int sum=0;
    // 135 = 1^1 + 3^2 + 5^3
    printf("Enter the number ");
    scanf("%d",&n);
    int nd=0;
    int n2=n;
    while(n>0){
        n/=10;
        nd++;
    }
    // printf("%d",nd);
    n=n2;
    for(int j=nd;j>=1;j--){
            int  digit=n%10;
            sum=sum + pow(digit,j);
            n/=10;
            
    }
    printf("\n%d",sum);
}