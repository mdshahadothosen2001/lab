#include<stdio.h>
void LENGTH(char str[])
{
    int len=0;

   for(int i=0; str[i]!='\0'; i++)
   {
       len++;
   }
   printf("%d",len);
}
int main()
{
    char str[]="Hello World!";
    LENGTH(str);


return 0;
}

