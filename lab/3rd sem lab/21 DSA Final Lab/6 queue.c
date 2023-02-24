#include<stdio.h>
#define N 9
int queue[N];
int FRONT=-1,REAR=-1;
void QINS(int item)
{
    if((FRONT==0 && REAR==N)||(FRONT==REAR+1))
    {
        printf("OVERFLOW\n");
        return 0;
    }
    if(FRONT==-1)
    {
        FRONT=0;
        REAR=0;
    }
    else if(REAR==N)
    {
        REAR=0;
    }
    else
        REAR=REAR+1;

    queue[REAR]=item;
    return 0;
}
void QDEL(int item)
{
    if(FRONT==-1)
    {
        printf("UNDERFLOW\n");
        return 0;
    }
    item=queue[FRONT];
    if(FRONT==REAR)
    {
        FRONT=0;
        REAR=0;
    }
    else if(FRONT==N)
    {
        FRONT=0;
    }
    else
        FRONT=FRONT+1;

    return 0;
}
int main()
{
    QINS(5);
    QINS(8);
    QINS(9);
    QDEL(5);
    printf("%d",queue[FRONT]);
    return 0;
}

