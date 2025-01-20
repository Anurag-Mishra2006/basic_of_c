// write a program in c to sort the string array in ascending order
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str) , stdin);
    str[strcspn(str, "\n")] = '\0';
    char ans[100] ;
    int i =0 ;
    while(str[i] !='\0'){
        for(int j = i+1 ; str[j] !='\0' ; j++){
            if(str[i]>str[j]){
                char temp = str[j];
                str[j] = str[i];
                str[i]= temp;
            }
        }
        i++;
    }
    printf(" sorted string is %s ",str);
    
     
}