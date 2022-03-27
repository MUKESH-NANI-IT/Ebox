/*
Table

Simon has a rectangular table consisting of n rows and m columns. Simon numbered the rows of the table from top to bottom starting from one and the columns — from left to right starting from one. We'll represent the cell on the x-th row and the y-th column as a pair of numbers (x, y). The table corners are cells: (1, 1), (n, 1), (1, m), (n, m).

Simon thinks that some cells in this table are good. Besides, it's known that no good cell is the corner of the table.

Initially, all cells of the table are colorless. Simon wants to color all cells of his table. In one move, he can choose any good cell of table (x1, y1), an arbitrary corner of the table (x2, y2) and color all cells of the table (p, q), which meet both inequations: min(x1, x2) ≤ p ≤ max(x1, x2), min(y1, y2) ≤ q ≤ max(y1, y2).

Note:
If aij equals zero, then cell (i, j) isn't good. Otherwise aij equals one. It is guaranteed that at least one cell is good. It is guaranteed that no good cell is a corner.

*/
//                                          CODE
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
        break;
        else
            printf("The minimum number of operations = 4\n");
        break;
    }

    return 0;
}