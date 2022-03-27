/*
Number of White Cells

Nurikabe logical game (sometimes called Islands in the Stream) is a binary determination puzzle. The puzzle is played on a typically rectangular grid of cells, some of which contain numbers. You must decide for each cell if it is white or black (by clicking on them) according to the following rules:
All of the black cells must be connected.
Each numbered cell must be part of a white island of connected white cells.
Each island must have the same number of white cells as the number it contains (including the numbered cell).
Two islands may not be connected.
There cannot be any 2x2 blocks of black cells.
Unnumbered cells start out grey and cycle through white and black when clicked. Initially numbered cells are white in color.
*/
//                                  CODE
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n, count = 0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] <= 10 && a[i][j] != 20)
            {
                count += a[i][j];
            }
        }
    }
    printf("%d", count);
    return 0;
}