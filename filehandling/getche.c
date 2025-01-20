#include <stdio.h>
#include <conio.h>  // Required for getche()

int main() {
    char ch;

    printf("Press any key: ");
    ch = getche();  // Capture a single character input and echo it

    printf("\nYou pressed: %c\n", ch);

    return 0;
}
