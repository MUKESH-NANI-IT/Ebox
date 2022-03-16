
#include <stdio.h>
#include <string.h>
#include <math.h>

int num[52][52];
int main()
{
    int n, m;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the description of the tables cells\n");
    while ((n != EOF) && (m != EOF))
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &num[i][j]);
            }
        }
        int judge = 0;
        for (int i = 1; i <= m; i++)
        {
            if (num[1][i] == 1)
                judge = 1;
        }
        for (int i = 1; i <= m; i++)
        {
            if (num[n][i] == 1)
                judge = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (num[i][1] == 1)
                judge = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (num[i][m] == 1)
                judge = 1;
        }
        if (judge == 1)
            printf("The minimum number of operations = 2\n");
        else
            printf("The minimum number of operations = 4\n");
    }

    return 0;
}