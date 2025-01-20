// what is EOF -> end of file -> when there was an error in the program it throw EOF -> 
// which is constant defined in the stdio.h header file

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * ptr = NULL;
    ptr = fopen("myfile2.txt","r");
    char c = fgetc(ptr); // read a char from the file pointer
    printf("The character i read was %c\n" , c);

    c = fgetc(ptr); // read a char from the file pointer
    printf("The character i read was %c\n" , c);
    
    char str[40];
    fgets(str,5,ptr); // the length of the string is 1 less than the given char as it include null char also
     // 3 is given to read the length of file upto length 3
    printf("the string is %s" , str);
    fclose(ptr);
}