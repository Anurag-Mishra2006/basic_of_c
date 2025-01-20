#include <stdio.h>
#include<stdlib.h>
void rev(void);
int main()
{
 rev();
 return 0; 
}
 
void rev(void)
{
 char ch;
 if((ch=getchar())!='\n')
 rev();
 printf("%c",ch);
}
