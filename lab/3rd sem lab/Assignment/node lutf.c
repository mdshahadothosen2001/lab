
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*stnode;


void createNodeList(int n);
void display();


int main()
{
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createNodeList(n);

    printf("\nData in the list \n");
    display();

    return 0;
}


void createNodeList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf("Memory can not be allocated\n");
        return 0;
    }


    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    stnode->data = data;
    stnode->next = NULL;


    temp = stnode;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        if(newNode == NULL)
        {
            printf("Memory can not be allocated\n");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}


void display()
{
    struct node *temp;


    if(stnode == NULL)
    {
        printf("No Data here");
        return;
    }

    temp = stnode;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

