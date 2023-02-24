#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *left, *right;
};

struct node* newNode(int item)
{
    struct node* temp =  (struct node *)malloc(sizeof(struct node));
    temp->val = item;
    temp->left = temp->right = NULL;
    return temp;
}

void postorder(struct node* root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->val);
    }
}


struct node* insert(struct node* node, int val)
{
    if (node == NULL) return newNode(val);

    if (val < node->val)
        node->left  = insert(node->left, val);
    else if (val > node->val)
        node->right = insert(node->right, val);

    return node;
}

int main()
{
    /* Our BST will look like this
              90
           /     \
          70      130
         /  \    /  \
       50   75  110  150 */
    struct node* root = NULL;
    root = insert(root, 90);
    insert(root, 70);
    insert(root, 50);
    insert(root, 75);
    insert(root, 130);
    insert(root, 110);
    insert(root, 150);


    postorder(root);

    return 0;
}
