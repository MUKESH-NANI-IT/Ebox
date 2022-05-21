#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tnode
{
    int data;
    struct tnode *leftc;
    struct tnode *rightc;
};

void insert(struct tnode **, int num);
void inorder(struct tnode *);
int search(struct tnode *s, int ele);

int main()
{
    struct tnode *root = NULL;
    char ch[5];
    int num, ele;
    do
    {
        printf("Enter the element to be inserted in the tree\n");
        scanf("%d", &num);
        insert(&root, num);
        printf("Do you want to insert another element?\n");
        scanf("%s", ch);
    } while (strcmp(ch, "yes") == 0);
    printf("Inorder Traversal : The elements in the tree are");
    inorder(root);
    printf("\n");
    printf("Enter the element to be searched\n");
    scanf("%d", &ele);
    if (search(root, ele))
        printf("%d found\n", ele);
    else
        printf("%d not found\n", ele);
    return 0;
}

void insert(struct tnode **s, int num)
{
    if ((*s) == NULL)
    {
        (*s) = (struct tnode *)malloc(sizeof(struct tnode));
        (*s)->data = num;
        (*s)->leftc = NULL;
        (*s)->rightc = NULL;
    }
    else
    {
        if (num < (*s)->data)
            insert(&((*s)->leftc), num);
        else
            insert(&((*s)->rightc), num);
    }
}

int search(struct tnode *s, int ele)
{
    if (s == NULL)
    {
        return 0;
    }
    else
    {
        if (s->data == ele)
        {
            return 1;
        }
        else if (s->data < ele)
        {
            return search(s->rightc, ele);
        }
        else
        {
            return search(s->leftc, ele);
        }
    }
}

void inorder(struct tnode *s)
{
    if (s != NULL)
    {
        inorder(s->leftc);
        printf(" %d", s->data);
        inorder(s->rightc);
    }
}