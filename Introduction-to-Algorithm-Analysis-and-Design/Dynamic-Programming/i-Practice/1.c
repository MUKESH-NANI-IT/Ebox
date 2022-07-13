#include <stdio.h>
int find_max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int knapsack(int W, int *wt, int *val, int n)
{
    int ans[n + 1][W + 1];
    int itm, w;
    for (itm = 0; itm <= n; itm++)
        ans[itm][0] = 0;
    for (w = 0; w <= W; w++)
        ans[0][w] = 0;
    for (itm = 1; itm <= n; itm++)
    {
        for (w = 1; w <= W; w++)
        {
            if (wt[itm - 1] <= w)
                ans[itm][w] = find_max(ans[itm - 1][w - wt[itm - 1]] + val[itm - 1], ans[itm - 1][w]);
            else
                ans[itm][w] = ans[itm - 1][w];
        }
    }
    return ans[n][W];
}
int main()
{
    int n, W, i;
    printf("Enter the number of items");
    scanf("%d", &n);
    int wt[n], val[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the weight and profit of item %d\n", i+1);
        scanf("%d %d", &wt[i], &val[i]);
    }
    printf("Enter the capacity of the Knapsack\n");
    scanf("%d", &W);
    
    int ans = knapsack(W, wt, val, n);
    printf("The maximum profit that can be obtained from the knapsack is %d", ans);
    return 0;
}