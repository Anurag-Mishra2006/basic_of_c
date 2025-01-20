#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int (*p)[3] = &arr;  // Pointer to an array of 3 integers

    // Accessing elements through the pointer
    printf("First element: %d\n", (*p)[0]);
    printf("Second element: %d\n", (*p)[1]);
    printf("Third element: %d\n", (*p)[2]);


    // Array of pointers to strings
    char *arr2[] = {"Hello", "World", "C", "Programming"};

    // Print strings using the array of pointers
    for (int i = 0; i < 4; i++) {
        printf("%s\n", arr2[i]);
    }

    //  pointer to pointer
     int a = 10;
    int *p2 = &a;    // Pointer to integer
    int **pp = &p2;  // Pointer to pointer to integer

    // Accessing value through pointer to pointer
    printf("Value of a: %d\n", **pp);

    // Modifying value through pointer to pointer
    **pp = 20;
    printf("New value of a: %d\n", a);
    return 0;
}
/*
    pointer to structure

    #include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare and initialize a structure variable
    struct Person p1 = {"John Doe", 30};
    
    // Declare a pointer to the structure
    struct Person *ptr = &p1;
    
    // Access structure members using the pointer
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    
    return 0;
}

*/