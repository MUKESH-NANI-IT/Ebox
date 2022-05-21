#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void matrix(int **, int);
int main()
{
    int n, e, i, **w, c = 0, b = 0, a;
    char ch[5];
    printf("Please enter the number of nodes in the graph\n");
    scanf("%d", &n);
    printf("Please enter the number of edges in the graph\n");
    scanf("%d", &e);
    w = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        *(w + i) = (int *)calloc(n, sizeof(int));
    }
    printf("Is the graph directed\n");
    scanf("%s", ch);
    if (strcmp("yes", ch) != 0)
    {
        for (i = 0; i < e; i++)
        {
            printf("Enter the start node, end node and weight of edge no %d\n", i);
            scanf("%d%d%d", &c, &b, &a);
            w[b][c] = a;

            w[c][b] = a;
        }
    }
    else
    {
        for (i = 0; i < e; i++)
        {
            printf("Enter the start node, end node and weight of edge no %d\n", i);
            scanf("%d%d%d", &c, &b, &a);
            w[c][b] = a;
        }
    }
    matrix(w, n);

    return 0;
}

void matrix(int **w, int n)
{
    int i, j;
    printf("\n\nAdjacency Matrix Representation:\n");
    for (i = 0; i < n; i++)
    {

        printf("\n");
    }
}