#include<stdio.h>
#include<conio.h>
#define max 5
int cir_queue[max];
int rear=-1;
int front=-1;
void insert(){
    int element;
    if(front==(rear+1)%max)
     printf("cir_queue is overflow\n");
    else{
        if(front==-1)
         front=0;
        printf("Enter a element\n");
        scanf("%d",&element);
        rear=(rear+1)%max;
        cir_queue[rear]=element;}}
void delete(){
    int element;
    if(front==-1)
     printf("cir_queue is underflow \n");
    else{
        element=cir_queue[front];
        printf("%d is deleted \n",element);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
         front=(front+1)%max;}}
void display(){
    int i;
    if(front==-1)
      printf("cir_queue is underflow\n");
    else{
        for(i=(front)%max;i<=rear%max;i++)
         printf("%d ",cir_queue[i]);}
    if(front>rear){
        for(i=0;i<=rear;i++)
          printf("%d ",cir_queue[i]);
        for(i=front;i<max;i++)
          printf("%d ",cir_queue[i]);
        }
     printf("\n");
}

int main()
{
insert();
insert();
insert();
display();
delete();
display();
    return 0;
}
