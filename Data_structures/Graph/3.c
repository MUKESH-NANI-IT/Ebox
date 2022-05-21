#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node **convmattolist(int **, int, char *);
void printlist(struct node **, int);
void printadjmatrix(int **, int);
void DFS(struct node **, int rows, int snode);
void DFSutil(struct node **, int snode, int *visited);
struct node
{
    int nodeno;
    int edgeweight;
    struct node *link;
};

int main()
{
    int **A;
    int rows, edges, snode, enode, weight;
    int i;
    char directed[4];

    struct node **list;

    printf("Enter the number of nodes in the graph\n");
    scanf("%d", &rows);

    printf("Enter the number of edges in the graph\n");
    scanf("%d", &edges);

    printf("Is the graph directed(yes/no)\n");
    scanf("%s", directed);

    A = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        *(A + i) = (int *)calloc(rows, sizeof(int));

    for (i = 0; i < edges; i++)
    {
        printf("Enter the start node, end node and weight of edge no %d\n", i);
        scanf("%d%d%d", &snode, &enode, &weight);
        if (strcmp(directed, "yes") == 0)
            *(*(A + snode) + enode) = weight;
        else
        {
            *(*(A + snode) + enode) = weight;
            *(*(A + enode) + snode) = weight;
        }
    }

    list = convmattolist(A, rows, directed);
    printadjmatrix(A, rows);
    printlist(list, rows);

    printf("Enter the starting node / vertex for depth first traversal\n");
    scanf("%d", &snode);
    printf("Depth First Traversal starting from node %d\n", snode);
    DFS(list, rows, snode);
    printf("\n");
    return 0;
}

struct node **convmattolist(int **A, int rows, char *dir)
{
    int i, j;
    struct node **list;
    struct node *temp;

    list = (struct node **)malloc(rows * sizeof(struct node *));

    for (i = 0; i < rows; i++)
    {
        *(list + i) = NULL;

        for (j = 0; j < rows; j++)
        {
            if (*(*(A + i) + j) != 0)
            {
                if (*(list + i) == NULL)
                {
                    *(list + i) = (struct node *)malloc(sizeof(struct node));
                    temp = *(list + i);
                    temp->nodeno = j;
                    temp->edgeweight = *(*(A + i) + j);
                    temp->link = NULL;
                }
                else
                {
                    temp = *(list + i);

                    while (temp->link != NULL)
                        temp = temp->link;

                    temp->link = (struct node *)malloc(sizeof(struct node));
                    temp = temp->link;

                    temp->nodeno = j;
                    temp->edgeweight = *(*(A + i) + j);
                    temp->link = NULL;
                }
            }
        }
    }

    return list;
}

void printadjmatrix(int **A, int rows)
{
    int i, j;

    printf("Adjacency Matrix Representation:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", *(*(A + i) + j));
        }
        printf("\n");
    }
}

void printlist(struct node **list, int rows)
{
    int i;
    struct node *temp;

    printf("Adjacency List Representation:\n");

    for (i = 0; i < rows; i++)
    {
        temp = *(list + i);

        if (temp != NULL)
            printf("Node %d is connected to the following nodes:\n", i);

        while (temp != NULL)
        {
            printf("Node %d with edge weight %d\n", temp->nodeno, temp->edgeweight);
            temp = temp->link;
        }
    }
}

void DFS(struct node **Alist, int rows, int snode)
{
    int i;
    int *visited;
    visited = (int *)calloc(rows, sizeof(int));

    DFSutil(Alist, snode, visited);
    for (i = 0; i < rows; i++)
    {
        }
}

void DFSutil(struct node **Alist, int snode, int *visited)
{
    struct node *temp;
    temp = *(Alist + snode);
    visited[snode] = 1;
    printf("%d ", snode);
    while (temp != NULL)
    {
        if (visited[temp->nodeno] == 0)
        {
            DFSutil(Alist, temp->nodeno, visited);
        }
        temp = temp->link;
    }
}