/*

Valid Configuration

Nurikabe logical game (sometimes called Islands in the Stream) is a binary determination puzzle. The puzzle is played on a typically rectangular grid of cells, some of which contain numbers. You must decide for each cell if it is white or black (by clicking on them) according to the following rules:

All of the black cells must be connected.
Each numbered cell must be part of a white island of connected white cells.
Each island must have the same number of white cells as the number it contains (including the numbered cell).
Two islands may not be connected.
There cannot be any 2x2 blocks of black cells.
Unnumbered cells start out grey and cycle through white and black when clicked. Initially numbered cells are white in color.

*/
//                                      CODE
#include <stdio.h>
int main()
{
    int N, i, j, flag = 0;
    scanf("%d", &N);
    int a[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (a[i][j] <= 10 && a[i][j] > 0 && a[i + 1][j + 1] <= 10 && a[i][j + 1] > 0 && a[i][j] != -1 && a[i][j + 1] != -1 && i != N - 1 && j != N - 1)
            {
                if (a[i + 1][j] != 0 || a[i][j + 1] != 0)
                    flag = 1;
            }
            if (a[i][j] <= 10 && a[i][j] > 0 && a[i + 1][j - 1] <= 10 && a[i + 1][j - 1] > 0 && a[i][j] != -1 && a[i + 1][j - 1] != -1 && i != N - 1 && j != 0)
            {
                if (a[i][j - 1] != 0 || a[i + 1][j] != 0)
                    flag = 1;
            }
            if (a[i][j] <= 10 && a[i][j] > 0 && a[i - 1][j - 1] <= 10 && a[i - 1][j - 1] > 0 && a[i][j] != -1 && a[i - 1][j - 1] != -1 && i != 0 && j != 0)
            {
                if (a[i][j - 1] != 0 || a[i - 1][j] != 0)
                    flag = 1;
            }
            if (a[i][j] <= 10 && a[i][j] > 0 && a[i - 1][j + 1] <= 10 && a[i - 1][j + 1] > 0 && a[i][j] != -1 && a[i - 1][j + 1] != -1 && i != 0 && j != N - 1)
            {
                if (a[i][j + 1] != 0 || a[i - 1][j] != 0)
                    flag = 1;
            }
            if (a[i][j] < 10 && a[i][j + 2] < 10 && a[i][j] > 0 && a[i][j + 2] > 0 && j != N - 1 && j != N - 2)
            {
                if (a[i][j + 1] != 0)
                    flag = 1;
            }
            if (a[i][j] <= 10 && a[i + 2][j] <= 10 && a[i][j] > 0 && a[i + 2][j] > 0 && i != N - 1 && i != N - 2)
            {
                if (a[i + 1][j] != 0)
                    flag = 1;
            }
            if (a[i][j] == 1)
            {
                if (a[i][j + 1] != 0 && a[i][j - 1] != 0 && a[i + 1][j] != 0 && a[i - 1][j] != 0)
                    flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}