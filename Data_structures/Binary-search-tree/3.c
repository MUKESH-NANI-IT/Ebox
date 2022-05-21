#include <stdio.h>
#include <stdlib.h>

struct tnode
{
    struct tnode *leftc;
    int data;
    struct tnode *rightc;
};

void insert(struct tnode **, int);
struct tnode *delete (struct tnode *, int);
void search(struct tnode **, int, struct tnode **, struct tnode **, int *);
void inorder(struct tnode *);
struct tnode *findmin(struct tnode *);
int s(struct tnode *, int);
int main()
{
    struct tnode *bt;
    int b, n;
    printf("Binary Search Tree Implementation.\n\nChoice 1: Insert an element.\nChoice 2: Delete an element.\nChoice 3: Display.\n");
    printf("\nEnter your choice :\n");
    scanf("%d", &n);
    bt = NULL; /* empty tree */
    while ((n == 1) || (n == 2) || (n == 3))
    {
        switch (n)
        {
        case 1:
        {
            printf("Enter the element to be inserted :\n");
            scanf("%d", &b);
            insert(&bt, b);
            break;
        }
        case 2:
        {
            printf("Enter the element to be deleted :\n");
            scanf("%d", &b);

            bt = delete (bt, b);
            break;
        }
        case 3:
        {
            if (bt == NULL)
            {
                printf("There are no elements in the BST.");
            }
            else
            {
                inorder(bt);
            }
            printf("\n");
            break;
        }
        default:
        {
            break;
        }
        }
        printf("Enter your choice :\n");
        scanf("%d", &n);
    }
    return 0;
}

/* inserts a new node in a binary search tree */
void insert(struct tnode **sr, int num)
{
    if (*sr == NULL)
    {
        *sr = malloc(sizeof(struct tnode));

        (*sr)->leftc = NULL;
        (*sr)->data = num;
        (*sr)->rightc = NULL;
    }
    else /* search the node to which new node will be attached */
    {
        /* if new data is less, traverse to left */
        if (num < (*sr)->data)
            insert(&((*sr)->leftc), num);
        else
            /* else traverse to right */
            insert(&((*sr)->rightc), num);
    }
}
int s(struct tnode *root, int key)
{
    if (root == NULL)
        return 0;
    else if (root->data == key)
    {
        return 1;
    }
    else
    {
        if (root->data > key)
        {
            return s(root->leftc, key);
        }
        else
        {
            return s(root->rightc, key);
        }
    }
}
void search(struct tnode **q, int aa, struct tnode **t, struct tnode **r, int *a)
{
}
/* deletes a node from the binary search tree */
struct tnode *findmin(struct tnode *root)
{
    if (root->leftc == NULL)
    {
        return root;
    }
    else
    {
        return findmin(root->leftc);
    }
}
struct tnode *delete (struct tnode *root, int item)
{
    if (root == NULL)
    {

        printf("Tree is empty");
    }
    else if (!s(root, item))
    {
        printf("Data to be deleted, not found");
    }
    else if (item < root->data)
    {
        root->leftc = delete (root->leftc, item);
    }
    else if (item > root->data)
    {
        root->rightc = delete (root->rightc, item);
    }
    else if (root->leftc != NULL && root->rightc != NULL)
    {
        struct tnode *tmp;
        tmp = findmin(root->rightc);
        root->data = tmp->data;
        root->rightc = delete (root->rightc, tmp->data);
    }
    else
    {
        struct tnode *tmp;
        tmp = root;
        if (root->leftc == NULL)
        {
            root = root->rightc;
        }
        else if (root->rightc == NULL)
        {
            root = root->leftc;
        }
        free(tmp);
    }
    return root;
}
void inorder(struct tnode *sr)
{
    if (sr != NULL)
    {
        inorder(sr->leftc);
        printf("%d ", sr->data);
        inorder(sr->rightc);
    }
}