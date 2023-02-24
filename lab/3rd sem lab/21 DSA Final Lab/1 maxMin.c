#include<stdio.h>

void findMax(int data[],int len)
{

    int k,loc=0,max=data[0];
    for(k=0; k<len; k++)
    {
        if(max<data[k])
        {
            loc=k;
            max=data[k];
        }
    }
        
printf("Loc is %d of Maximum number  %d\n",loc+1,max);
}
void findMin(int data[],int len)
{

    int k,loc=0,min=data[0];
    for(k=0; k<len; k++)
    {
        if(min>data[k])
        {
            loc=k;
            min=data[k];
        }
    }
        printf("Loc is %d of Minimum number  %d\n",loc+1,min);
}

int main()
{
    int i,len;
    printf("Enter Array size: ");
    scanf("%d",&len);
    int data[len];
    printf("Enter Element: \n");
    for(i=0; i<len; i++)
        scanf("%d",&data[i]);

    findMax(data,len);
    findMin(data,len);
    return 0;
}

