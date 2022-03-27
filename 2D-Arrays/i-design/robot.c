/*
Robot at the Fair
Winter is back and is end of season’s sale all over. The City’s biggest Housewares and Home Appliances Fair is inaugurated at the Mathura Trade Centre and the show hosted numerous retailers, wholesalers, distributors to promote domestic economy. Public participated in large groups and the Event coordinators have designed a Robot at the Event ground to give instructions to the public in which directions to move.

The Event ground is a rectangular grid with R rows and C columns, with R*C cells in the grid. There are many obstacles in the event ground, so the Robot is set initially in the cell such that it is facing north, south, east or west. The initial position of the Robot (X,Y) is known. It can take a series of m moves through the ground. Each move is one of:

F - moves forward one cell in the direction that he is facing, or
L - turns 90 degrees counter-clockwise, remaining on the same cell, or
R - turns 90 degrees clockwise, remaining on the same cell.

After making these moves, the Robot would stand at some final position where the guests wanted to drop. The coordinators wanted you to figure out where the Robot is standing. You will help them by writing a program to determine all possible final position of the Robot. You may also assume that the Robot is always facing a direction that is parallel to the sides of the event ground (north, south, east, or west).
*/
//                                      CODE
#include <stdio.h>
int main()
{
    int i, j, r, c, z;
    scanf("%d%d", &r, &c);
    char arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("   %c", &arr[i][j]);
        }
    }
    int x, y, m;
    scanf("%d%d%d", &x, &y, &m);
    char moves[m];
    for (i = 0; i < m; i++)
    {
        scanf("  %c", &moves[i]);
    }
    int dir = 0, flag = 0;
    int p, q;
    p = x;
    q = y;
    for (dir = 0; dir < 4; dir++)
    {
        z = dir, flag = 0, p = x, q = y;
        for (i = 0; i < m; i++)
        {
            if (moves[i] == 'F')
            {
                if (dir == 0)
                {
                    if (p == 0 || arr[p - 1][q] == 'X')
                    {
                        flag = 1;
                        dir = z;
                        break;
                    }
                    else
                    {
                        p = p - 1;
                    }
                }
                else if (dir == 1)
                {
                    if (q == 0 || arr[p][q - 1] == 'X')
                    {
                        flag = 1;
                        dir = z;
                        break;
                    }
                    else
                    {
                        q = q - 1;
                    }
                }
                else if (dir == 2)
                {
                    if (p == (r - 1) || arr[p + 1][q] == 'X')
                    {
                        flag = 1;
                        dir = z;
                        break;
                    }
                    else
                    {
                        p = p + 1;
                    }
                }
                else
                {
                    if (q == (c - 1) || arr[p][q + 1] == 'X')
                    {
                        flag = 1;
                        dir = z;
                        break;
                    }
                    else
                    {
                        q = q + 1;
                    }
                }
            }
            if (moves[i] == 'R')
            {
                if (dir == 0)
                {
                    dir = 3;
                }
                else
                {
                    dir = dir - 1;
                }
            }
            if (moves[i] == 'L')
            {
                if (dir == 3)
                {
                    dir = 0;
                }
                else
                {
                    dir = dir + 1;
                }
            }
        }
        if (flag == 0)
        {
            printf("%d %d\n", p, q);
        }
        dir = z;
    }
    return 0;
}