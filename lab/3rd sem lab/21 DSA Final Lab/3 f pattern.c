#include<stdio.h>
int pattern(char t[],char p[],int s,int r)
{
    int d,k=0,max=s-r+1;
    while(k<=max)
    {
        d=0;
        for(int l=0; l<r; l++)
        {
            if(p[l]==t[k+l])
            {
                d++;
            }

            else
                break;
        }

        if(d==r)
            break;

    k=k+1;
    }

    return k;

}
int main()
{
    int s,r;
    char t[]="Md. Shahadot Hosen";
    char p[]="dot";
    s=strlen(t);
    r=strlen(p);
    s=pattern(t,p,s,r);
    printf("%d",s);
    return 0;
}

