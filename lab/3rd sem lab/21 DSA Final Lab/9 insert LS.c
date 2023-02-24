#include<stdio.h>
struct node
{
    int INFO;
    struct node* LINK;
};
struct node* START=NULL;
int len;

void CREATE(int item)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->INFO=item;
    temp->LINK=NULL;

    if(START==NULL)
        START=temp;
    else
    {
        struct node* ptr;
        ptr=START;

        while(ptr->LINK!=NULL)
        {
            ptr=ptr->LINK;
        }
        ptr->LINK=temp;
    }
}
void INSERT(int loc,int item)
{
    struct node* NEW;
    NEW=(struct node*)malloc(sizeof(struct node));
    NEW->INFO=item;
    if(loc>len)
        printf("Invalid Location for insert\n");
    else
    {
        if(loc==0)
        {
        NEW->LINK=START;
        START=NEW;
        }
        else
        {
            struct node* ptr;
            ptr=START;
            int i=0;
            while(i<loc-1)
            {
                ptr=ptr->LINK;
                i++;
            }
            NEW->LINK=ptr->LINK;
            ptr->LINK=NEW;
        }
    }
}

void display()
{
    struct node* ptr;
    ptr=START;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->INFO);
        ptr=ptr->LINK;
    }
    printf("NULL\n");
}
int main()
{
    len=5;
    CREATE(33);
    CREATE(34);
    CREATE(35);
    CREATE(36);
    CREATE(37);
    display();
    INSERT(0,31);
    display();
    INSERT(2,31);
    display();


    return 0;
}

