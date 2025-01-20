#include <stdio.h>
int main()
{
    // Heirarchy of && is more ||
    int a, b, c;
    printf("Enter the first num: ");
    scanf("%d", &a);
    printf("Enter the second num: ");
    scanf("%d", &b);
    printf("Enter the Third num: ");
    scanf("%d", &c);
    if (a > b)
    { // b is out of race
        if (a > c)
            printf("%d is greatest",a);
        else //
            printf("%d is greatest", c);
    }
    else{
        if(b>c)printf("%d is greatest ",b);
        else printf("%d is greatest ",c);
    }
}