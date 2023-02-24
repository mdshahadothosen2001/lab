#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct Node
{
    int data;
    struct Node* next;
};
void deleteList(struct Node** head_ref,int loc)
{
   struct Node* current = *head_ref;
   struct Node* next;
       next = current->next;
       current = next;

   *head_ref = NULL;
}

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void display(struct Node* node){
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    printf("\n Before Deleting linked list");
    display(head);

    deleteList(&head,3);

    printf("\n After Linked list deleted");
    display(head);
}
