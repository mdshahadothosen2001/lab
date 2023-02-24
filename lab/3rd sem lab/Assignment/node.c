#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root =NULL;
void append(void);
void display(void);

void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the Node data:");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if (root==NULL)
    {
        root= temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!= NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while (temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->link;
        }
        printf("\n\n");
    }
}
int main()
{

    int n;
    Work:
    printf("1.Append\n2.display\n3.Exit\n");
    printf("Enter Your Choice:");
    scanf("%d",&n);

    if(n==1)
    {
    append();
    goto Work;
    }
    else if(n==2)
    {
        display();
    goto Work;
    }
    else
        printf("\nExit");


}
