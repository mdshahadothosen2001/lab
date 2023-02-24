#include<stdio.h>
#include<stdlib.h>
struct node
{
    int INFO;
    struct node* RIGHT;
    struct node* LEFT;
};
struct node* ROOT=NULL;
void CREATE(int item)
{
    struct node *NEW,*parrent;
    NEW=(struct node*)malloc(sizeof(struct node));
    NEW->INFO=item;
    NEW->LEFT=NEW->RIGHT=NULL;
    parrent=ROOT;
    if(ROOT==NULL)
    {
        ROOT=NEW;
    }
    else
    {
       struct node* pos;
       pos=ROOT;
       while(pos!=NULL)
       {
           parrent=pos;
           if(NEW->INFO > pos->INFO)
           {
               pos=pos->RIGHT;
           }
           else
           {
               pos=pos->LEFT;
           }
       }
       if(NEW->INFO > parrent->INFO)
       {
           parrent->RIGHT=NEW;
       }
       else
       {
           parrent->LEFT=NEW;
       }
    }
}
void pre(struct node* ptr)
{

    if(ptr)
        {
            printf(" %d ",ptr->INFO);
            pre(ptr->LEFT);
            pre(ptr->RIGHT);
        }
}

void pst(struct node* ptr)
{
    if(ptr)
        {
            pst(ptr->LEFT);
            pst(ptr->RIGHT);
            printf(" %d ",ptr->INFO);
        }
}
void inr(struct node* ptr)
{
    if(ptr)
        {
            inr(ptr->LEFT);
            printf(" %d ",ptr->INFO);
            inr(ptr->RIGHT);
        }
}
int main()
{

    CREATE(44);
    CREATE(22);
    CREATE(52);
    CREATE(11);
    CREATE(30);
    struct node* ptr;
    ptr=ROOT;
    printf("\nPREORDER:\n");
    pre(ptr);
    printf("\nPOSTORDER:\n");
    pst(ptr);
    printf("\nINORDER:\n");
    inr(ptr);
    return 0;
}

