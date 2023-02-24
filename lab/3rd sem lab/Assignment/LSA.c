#include<stdio.h>

void LINEAR(int DATA[],int n,int item,int loc)
{
    for(int i=0;i<n;i++)
    {
        loc=i+1;
        if(DATA[i]==item)
        {
            printf("LOC is %d\n",loc);
            exit(0);
        }

    }

printf("Element is not found\n");

}
int main()
{
    int N,ITEM,LOC;
    printf("Enter Array Size: ");
    scanf("%d",&N);
    int DATA[N];
    printf("Enter Array Element: \n");
    for(int i=0; i<N;i++)
        scanf("%d",&DATA[i]);
    printf("Enter ITEM :");
    scanf("%d",&ITEM);
    LINEAR(DATA,N,ITEM,LOC);


    return 0;
}
