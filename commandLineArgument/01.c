#include<stdio.h>
#include<stdlib.h>

// when we want to pass argument in main() we are restrict to give only tewo parameter -> argc , argv[]; 
int main (int argc , char * argv[]){
    int i;
    printf("total passed values to main %d\n", argc);
    printf("Entered values are \n");
    for(i =0 ;i<argc;i++){
        printf("%s\n" ,argv[i]);
    }
    int sum =0 ;
    for(int i=1 ; i<argc;i++){
          sum+= atoi(argv[i]); // stand for ascii to interger
         // converting string to integer
        

    }
    printf("sum of all the element is %d"  , sum);
    return 0;
}