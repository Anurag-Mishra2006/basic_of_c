#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * ptr = NULL;
    char string[100]="This content was produced by tutorial 64";
    // READING A FILE
    ptr = fopen("myfile.txt", "r"); // opening the file
    fscanf(ptr , "%s" , string); 
    //  fscanf() function is used to read formatted input from a file
    // fscanf(ptr , "%s" , string); --> is used to read the first word from the file and stores it in the string array
    
    printf("The content of this file has %s\n" , string);

    // WRITING A FILE
    // ptr = fopen("myfile.txt" , "w");// over write the content of previous
    // ptr = fopen("myfile.txt" , "a");//append to the next of the previous content

    // fprintf(ptr,"%s" , string);
    fclose(ptr);
}