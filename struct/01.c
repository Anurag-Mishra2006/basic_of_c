#include <stdio.h>
#include<string.h>
struct students{
    int rollno;
    char name[100];
    

};

int main() {
    // used to group different types of data together
    // it is user-defined data type that allow you to group variable of different type under a single name

    struct  students s[3];
    for(int i=0;i<3;i++){
        printf("enter the name : ");
        fflush(stdin);
        char tempname[100];
        fgets(tempname,sizeof(tempname),stdin);
        tempname[strcspn(tempname , "\n")] = '\0'; // removing the next line 
        strcpy(s[i].name , tempname);// strcpy(destination , source);

        printf("enter the rollno. ");
        scanf("%d",&s[i].rollno);
    }

    for(int i =0 ;i<3;i++){
        printf("Name : %s ", s[i].name);
        printf("Roll no. : %d\n", s[i].rollno);
    }
    
    return 0;
}