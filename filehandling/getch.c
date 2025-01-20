#include <stdio.h>
#include <conio.h> // Needed for getch()
// we have to add the directory of console-in.h

int main() {
    char ch;

    printf("Press any key: ");
    ch = getch();  // Capture a single character input
    printf("\nYou pressed: %c\n", ch);

    return 0;
}
