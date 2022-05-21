#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node **convmattolist(int **, int, char *);
void printlist(struct node **, int);
void printadjmatrix(int **, int);
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

    printf("Please enter the number of nodes in the graph\n");
    scanf("%d", &rows);

    printf("Please enter the number of edges in the graph\n");
    scanf("%d", &edges);

    printf("Is the graph directed\n");
    scanf("%s", directed);

    A = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        *(A + i) = (int *)calloc(rows, sizeof(int));

    // Read the graph information and construct the adjacency matrix
    if (strcmp("yes", directed) != 0)
    {
        for (i = 0; i < edges; i++)
        {
            printf("Enter the start node, end node and weight of edge no %d\n", i);
            scanf("%d%d%d", &snode, &enode, &weight);
            A[snode][enode] = weight;
            A[enode][snode] = weight;
        }
    }
    else
    {
        for (i = 0; i < edges; i++)
        {
            printf("Enter the start node, end node and weight of edge no %d\n", i);
            scanf("%d%d%d", &snode, &enode, &weight);
            A[snode][enode] = weight;
        }
    }
    list = convmattolist(A, rows, directed);
    printadjmatrix(A, rows);
    printlist(list, rows);
    return 0;
}

struct node **convmattolist(int **A, int rows, char *dir)
{
    struct node **list;
    struct node *temp;
    int i, j;
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
                    {

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

            printf("\n");
        }
    }

    void printlist(struct node * *list, int rows)
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