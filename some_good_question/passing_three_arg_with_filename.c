#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc holds the number of command-line arguments
    // argv is an array of strings representing the arguments

    // Check if there are exactly 4 arguments (1 for the program name + 3 user arguments)
    if (argc != 4) {
        printf("Usage: %s <arg1> <arg2> <arg3>\n", argv[0]);
        return 1; // Exit if incorrect number of arguments
    }

    // Print the program name (argv[0]) and the arguments
    printf("Program name: %s\n", argv[0]);
    printf("Argument 1: %s\n", argv[1]);
    printf("Argument 2: %s\n", argv[2]);
    printf("Argument 3: %s\n", argv[3]);

    return 0;
}
