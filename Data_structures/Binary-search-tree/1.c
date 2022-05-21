#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    struct node *left, *right;
    int data;
};
void insert(struct node **root, int num);
struct node *create(int num);
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);
int main()
{
    struct node *root = NULL;
    int num;
    char ch[5];
    do
    {
        printf("\nEnter the element to be inserted in the tree");
        scanf("%d", &num);
        insert(&root, num);
        printf("\nDo you want to insert another element?");
        scanf("%s", ch);

    } while (!strcmp("yes", ch));
    printf("\nInorder Traversal : The elements in the tree are");
    inorder(root);
    printf("\nPreorder Traversal : The elements in the tree are");
    preorder(root);
    printf("\nPostorder Traversal : The elements in the tree are");
    postorder(root);
    return 0;
}
struct node *create(int num)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->right = temp->left = NULL;
    return temp;
}
void insert(struct node **root, int num)
{
    struct node *temp, *curr;
    curr = *root;
    temp = create(num);
    if (*root == NULL)
    {
        *root = temp;
    }
    else
    {
        if (curr->data > temp->data && curr->right == NULL)
            curr->right = temp;
        if (curr->data > temp->data && curr->right != NULL)
        {
            curr = curr->right;
            insert(&curr, num);
        }
        if (curr->data < temp->data && curr->left == NULL)
            curr->left = temp;
        if (curr->data < temp->data && curr->left != NULL)
        {
            curr = curr->left;
            insert(&curr, num);
        }
    }
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d", root->data);
        preorder(root->right);
        preorder(root->left);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->right);
        printf(" %d", root->data);
        inorder(root->left);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {

        postorder(root->right);
        postorder(root->left);
        printf(" %d", root->data);
    }
}