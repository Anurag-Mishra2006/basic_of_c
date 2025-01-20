#include <stdio.h>
#include <stdbool.h>
#include<math.h>
// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= n; i++) { // Check up to the square root of n
        if (n % i == 0) return false; // If divisible by any number, it's not prime
    }
    return true;
}

// Function to rotate a number and return the rotated value
int rotate_number(int n) {
    int num_digits = 0, temp = n;
    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }

    int first_digit = n / pow(10, num_digits - 1); // Get the first digit
    int rotated = (n % (int)pow(10, num_digits - 1)) * 10 + first_digit;

    return rotated;
}

// Function to check if a number is a circular prime
bool is_circular_prime(int n) {
    int num_digits = 0, temp = n;
    
    // Count the number of digits in the number
    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }

    // Check all rotations of the number
    int rotated = n;
    for (int i = 0; i < num_digits; i++) {
        if (!is_prime(rotated)) {
            return false; // If any rotation is not prime, return false
        }
        rotated = rotate_number(rotated); // Rotate the number for the next iteration
    }

    return true; // If all rotations are prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_circular_prime(num)) {
        printf("%d is a circular prime.\n", num);
    } else {
        printf("%d is not a circular prime.\n", num);
    }

    return 0;
}
