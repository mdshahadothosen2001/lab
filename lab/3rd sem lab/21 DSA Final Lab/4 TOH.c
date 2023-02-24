#include<stdio.h>
int TOH(int n,char beg,char aux,char end)
{
    if(n==1)
    {
        printf("%c-->%c\n",beg,end);
        return 1;
    }
    TOH(n-1,beg,end,aux);
    printf("%c-->%c\n",beg,end);
    TOH(n-1,aux,beg,end);
    return 0;
}
int main()
{
TOH(4,'A','B', 'C' );
    return 0;
}

