#include<stdio.h>
#define maxstk 9
int top=NULL;
int stack[maxstk];
void push(int item)
{
    if(top==maxstk)
    {
         printf("OVERFLOW \n");
        return 0;
    }
    top=top+1;
    stack[top]=item;
    return 0;
}
void pop(int item)
{
    if(top==NULL)
    {
         printf("UNDERFLOW \n");
        return 0;
    }
    item=stack[top];
    top=top-1;
    return 0;

}
int main()
{
    push(8);
    push(9);
    push(6);
    pop(6);
    printf("%d",stack[top]);
    return 0;
}

