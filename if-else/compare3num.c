#include <stdio.h>
int main()
{
    // Heirarchy of && is more ||
    int n1, n2, n3;
    printf("Enter the first num: ");
    scanf("%d", &n1);
    printf("Enter the second num: ");
    scanf("%d", &n2);  
    printf("Enter the Third num: ");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3) 
        printf("First number is greatest"); 
    else if (n2 > n1 && n2 > n3) 
        printf("Second number is greatest");
    else if (n3 > n1 && n3 > n2)
        printf("Third number is greatest");
    else
        printf("You have enter a num twice ");   
}
