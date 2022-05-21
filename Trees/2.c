#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *right, *left;
};

struct queue
{
    int front, rear;
    int size;
    struct tree **array;
};

struct tree *newNode(int data);
struct queue *createQueue(int size);
void enqueue(struct tree *root, struct queue *queue);
struct tree *dequeue(struct queue *queue);
void insert(struct tree **root, int data, struct queue *queue);
void levelOrder(struct tree *root);
int isSumProperty(struct tree *node);

int main()
{
    struct tree *root = NULL;
    int data;
    struct queue *queue = createQueue(50);
    int i, n;
    printf("Enter the number of elements in the tree\n");
    scanf("%d", &n);
    printf("Enter the elements in the tree\n");
    for (i = 1; i <= n; ++i)
    {
        scanf("%d", &data);
        insert(&root, data, queue);
    }
    printf("The elements in the tree in level order are");
    levelOrder(root);
    printf("\n");

    if (isSumProperty(root))
        printf("The tree satisfies the children sum property ");
    else
        printf("The tree does not satisfy the children sum property ");

    return 0;
}

struct tree *newNode(int data)
{
    struct tree *nn = (struct tree *)malloc(sizeof(struct tree));
    nn->data = data;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

struct queue *createQueue(int size)
{
    struct queue *queue = (struct queue *)malloc(sizeof(struct queue));
    queue->size = size;
    queue->front = -1;
    queue->rear = -1;
    queue->array = (struct tree **)malloc(size * sizeof(struct tree *));
    return queue;
}

void enqueue(struct tree *root, struct queue *queue)
{
    if (queue->rear == queue->size - 1)
    {
        return;
    }
    queue->array[++queue->rear] = root;
    if (queue->front == -1)
        queue->front++;
}

struct tree *dequeue(struct queue *queue)
{
    if (queue->front == -1)
        return NULL;
    struct tree *temp = queue->array[queue->front];
    if (queue->front == queue->rear)
        queue->rear = queue->front = -1;
    else
        queue->front++;
    return temp;
}

void insert(struct tree **root, int data, struct queue *queue)
{
    struct tree *temp = newNode(data);
    if (*root == NULL)
        *root = temp;
    else
    {
        struct tree *front = queue->array[queue->front];
        if (front->left == NULL)
            front->left = temp;
        else if (front->right == NULL)
            front->right = temp;
        if (front->left != NULL && front->right != NULL)
            dequeue(queue);
    }
    enqueue(temp, queue);
}

void levelOrder(struct tree *root)
{
    struct queue *queue = createQueue(50);
    struct tree *temp = root;
    while (temp)
    {
        printf(" %d", temp->data);
        if (temp->left)
        {
            enqueue(temp->left, queue);
        }
        if (temp->right)
        {
            enqueue(temp->right, queue);
        }
        temp = dequeue(queue);
    }
}

int isSumProperty(struct tree *node)
{
    int ld = 0, rd = 0;
    if (node == NULL || (node->left == NULL && node->right == NULL))
    {
        return 1;
    }
    else
    {
        if (node->left != NULL)
        {
            ld = node->left->data;
        }
        if (node->right != NULL)
        {
            rd = node->right->data;
        }
        if (node->data == ld + rd && isSumProperty(node->left) && isSumProperty(node->right))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}