#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

// Function to print the union data
void printUnionData(union Data d) {
    printf("Integer: %d\n", d.i);
    printf("Float: %.2f\n", d.f);
    printf("Character: %c\n", d.c);
}

int main() {
    union Data data1;
    data1.i = 10;
    data1.f = 10.56;
    data1.c = 'A';
    printUnionData(data1);  // Passing union by value
    return 0;
}
