#include <stdio.h>

void largest(void)
{
    int i,n=10;
    int DATA[10] = {1, 2, 3, 9 ,5,88,45,8,90,0};
    int K=0,LOC=1,MAX=DATA[0];


    for(i=0; i<=n;i++)
    {
    K=K+1;
    if(K>=n)
    {
        printf("%d and max is %d",LOC+1,MAX);
        break;

    }
    if(MAX<DATA[K])
    {
        LOC=K;
        MAX=DATA[K];

    }


    }
}


int main()
{
    int e;
    largest();



    return 0;

}

