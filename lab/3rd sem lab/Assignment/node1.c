#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;

};

struct node* root=NULL;

void append(void)
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node*p;
        p=root;
        while(p->link!=NULL)
            p=p->link;
        p->link=temp;

    }
}

void display(void)
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
        printf("Emty");
    else
    {
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }
        printf("NULL\n");
    }
}

int main()
{
    int i,T;
    for(i=0; i>=0;i++)
    {
        printf("Press 1 for append, 2 for display, 3 for insert, 4 for delete, 5 for exit: ");
        scanf("%d",&T);
        if(T==1)
            append();
        else if(T==2)
            display();
        else if(T==5)
            break;
    }

    display();
    return 0;
}
