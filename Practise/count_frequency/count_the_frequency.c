#include<stdio.h> 
int main(){
    char str[25],uniq[25] ; 
    int count =0, j=0,ind=0,freq[25];
    printf("Enter string "); scanf("%[^\n]",str);
    for(char i='a';i<='z';i++){
        count=0;
        for(j=0; str[j] !='\0';j++) if(i==str[j])count++;
        if(count!=0){
            freq[ind]=count;
            uniq[ind]=i;
            ind++;
        }
    }
    for(j=0;j<=ind-1;j++) 
        {
            printf("Character = %c\t frequency= %d\n",uniq[j],freq[j]);
        }
     

}