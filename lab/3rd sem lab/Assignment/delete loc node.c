#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* root = NULL;
int len;

void append(void);
void display(void);
void deletion(int);

void main()
{
            append();
            append();
            append();
            display();
            deletion(3);
            display();
}
void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if(root == NULL){
        root = temp;
    }
    else{
        struct node* p;
        p = root;

        while(p->link != NULL){
           p = p->link;
        }
        p->link = temp;
    }

}


void display(){
    struct node* temp;
    temp = root;
    if(temp == NULL){
        printf(" List is empty\n");
    }
    else{
        while(temp != NULL){
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("NULL\n\n");
    }
}



void deletion(int length){
    struct node* temp;
    int loc;

    printf("Enter location to delete: ");
    scanf("%d",&loc);
    loc=loc-1;
    if(loc > length){
        printf("Invalid location\n");
    }
    else if(loc==0){
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else{
      struct node* p = root, *q;
      int i = 0;
      while(i < loc - 1){
        p = p->link;
        i++;
      }
      q = p->link;
      p->link = q->link;
      free(q);

    }
}
