#include <stdio.h>
#include<string.h>

int main() {
    // .. strlen() is for the length of the string
    char str[200] = "hello i am mr. robot";
    int size_of_string = strlen(str);
    printf("%d is the length of string \n", size_of_string);

    // .. strcpy()  --> copies the contents of one string into another
    char str2[200];
    strcpy(str2 , str);
    printf("%s" , str2);
    // 

    //  strcmp() --> compare two string lexicographically (char by char)
    int result = strcmp(str, str2);
    if (result == 0) {
        printf("\nStrings are equal.\n");
    } else if (result < 0) {
        printf("\nString 1 is less than String 2.\n");
    } else {
        printf("\nString 1 is greater than String 2.\n");
    }


    char *ptr = strchr(str, 'W'); // Find first occurrence of 'W'
    if (ptr != NULL) {
        printf("Found character: %c\n", *ptr);
    } else {
        printf("Character not found.\n");
    }



    char *ptr1 = strrchr(str, 'o'); // Find last occurrence of 'o'
    
    if (ptr1 != NULL) {
        printf("Found last occurrence of 'o': %s\n", ptr);
    } else {
        printf("Character not found.\n");
    }


    char str3[] = "Hello, World! How are you?";
    char *token = strtok(str3, " "); // Tokenize by space
    
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}