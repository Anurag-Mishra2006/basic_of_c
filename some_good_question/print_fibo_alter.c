#include <stdio.h>

// Function to print alternate Fibonacci numbers
void printAlternateFibonacci(int n) {
    int first = 0, second = 1, next, count = 0;

    // Print the first Fibonacci number
    if (n > 0) {
        printf("%d ", first);
        count++;
    }

    // Print the alternate Fibonacci numbers
    while (count < n) {
        next = first + second;
        first = second;
        second = next;

        // Print every alternate Fibonacci number
        if (count % 2 == 0) {
            printf("%d ", first);
        }

        count++;
    }
}

int main() {
    int n;

    // Input: Number of Fibonacci numbers to print
    printf("Enter the number of terms to print (for alternate Fibonacci numbers): ");
    scanf("%d", &n);

    printf("Alternate Fibonacci numbers are:\n");
    printAlternateFibonacci(n);

    return 0;
}
