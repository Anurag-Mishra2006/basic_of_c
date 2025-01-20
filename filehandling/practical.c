#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp ;
    int rollno ; char name[39];float mark;
    fp = fopen("file.txt" , "w");
    for(int i =0 ;i<3;i++){
        printf("the record %d" , i+1);
        scanf("%d %s %f",&rollno , name ,&mark);
        fprintf(fp , "%d %s %f \n", rollno , name,mark);
    }
    fclose(fp);
    return 0;
}