#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    
    // Read input using fgets
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it's present
    str[strcspn(str, "\n")] = '\0';  // Replace the newline with a null terminator
    
    // Output the modified string
    printf("You entered: '%s'\n", str);
    
    return 0;
}
