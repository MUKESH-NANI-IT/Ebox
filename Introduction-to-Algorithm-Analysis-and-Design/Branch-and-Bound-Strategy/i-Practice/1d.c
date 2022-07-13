#include <stdio.h>

int a[10][10], visited[10], n, cost = 0;

void get()
{
    int i, j;
    printf("Enter Number of Cities:\n");
    scanf("%d", &n);
    printf("Enter Cost Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
        visited[i] = 0;
    }
}
int least(int c)
{
    int i, nc = 999;
    int min = 999, kmin;
    for (i = 0; i < n; i++)
    {
        if ((a[c][i] != 0) && (visited[i] == 0))
            if (a[c][i] < min)
            {
                min = a[i][0] + a[c][i];
                kmin = a[c][i];
                nc = i;
            }
    }
    if (min != 999)
        cost += kmin;
    return nc;
}
void mincost(int city)
{
    int i, ncity;
    visited[city] = 1;
    printf("%d - ", city + 1);
    ncity = least(city);
    if (ncity == 999)
    {
        ncity = 0;
        printf("%d", ncity + 1);
        cost += a[city][ncity];
        return;
    }
    mincost(ncity);
}



void put()
{
    printf("Minimum cost:");
    printf("%d", cost);
}

void main()
{
    
    get();
    printf("\n\nThe Path is:\n\n");
    mincost(0);
    put();
    
}