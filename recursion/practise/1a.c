#include <stdio.h>

// Function to calculate GCD using an iterative approach (Euclidean algorithm)
int gcd(int a, int b) {
    // Loop until b becomes 0
    while (b != 0) {
        // Update a and b
        int temp = b;
        b = a % b;  // remainder of a divided by b
        a = temp;   // assign b to a
    }
    return a;  // When b becomes 0, a contains the GCD
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    int result = gcd(num1, num2);

    // Output the result
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
