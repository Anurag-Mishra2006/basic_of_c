#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    printf("file to be opened ? ");
    scanf("%s",filename);
    fp = fopen(filename , "r");
    if(fp == NULL){
        fprintf(stderr,"unable to open file %s\n", filename);
        return 1; // exit to operating system 
    }
    return 0;
}