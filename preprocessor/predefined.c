#include<stdio.h>
#define date __DATE__
#define currentTime __TIME__ 
#define currentfile __FILE__
#define currentLine __LINE__

int main(){
    printf("THE CUTTENT DATE IS %s\n",date);
    printf("THE CUTTENT TIME IS %s\n",currentTime);
    printf("THE CUTTENT FILE IS %s\n",currentfile);
    printf("THE CURRENT LINE NUMBER IS %d\n",currentLine);
}