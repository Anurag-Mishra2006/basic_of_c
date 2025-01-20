#include<stdio.h>
#include<string.h>
int main(){
    //Gets and puts
    // char str[]="Anurag is a good boy";
    // // printf("%s",str);

    // puts(str);//  it is use to print the string 
    // Puts also give the next line
    char str[40];
    // scanf("%s",str);//Only the first words

    // gets(str);

    // Another way 
    scanf("%[^\n]s",str);
    // Size 
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }

    printf("Size:  %d \n",size);
    // printf("%s\n",str);

    // Reverse
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse string:");
    puts(str);

    return 0;

}