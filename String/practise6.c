// write a program in c to find the maximum number of chars in a string

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    int max =0 ;
    char maxC = str[0];
    int i =0 ;
    while(str[i] !='\0'){
        int count =0 ;
        for(int j =0 ;str[j] != '\0';j++){
            if(str[i] ==str[j]){ 
                count++;
            }
        }
        if(count>max){
            max = count;
            maxC = str[i];
        }
        i++;
    }

    printf("Max char in string  is %c\nappears number of times: %d", maxC, max);
    
     
}