#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);  // Recursive call
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find and print the GCD
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
