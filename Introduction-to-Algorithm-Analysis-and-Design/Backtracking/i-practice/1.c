
#define N 100
#include <stdint.h>
#include <stdio.h>


void printSolution(int board[N][N],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}

int isSafe(int board[N][N],int n, int row, int col)
{
    int i, j;

    
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;

    
    for (i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j])
            return 0;

    return 1;
}

int solveNQUtil(int board[N][N],int n, int col)
{
  
    if (col >= n)
        return 1;

 
    for (int i = 0; i < n; i++)
    {
       
        if (isSafe(board,n, i, col))
        {
            board[i][col] = 1;

            
            if (solveNQUtil(board,n, col + 1))
                return 1;

            board[i][col] = 0; // BACKTRACK
        }
    }

    return 0;
}

int solveNQ(int n)
{
    int board[N][N] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    if (solveNQUtil(board,n, 0) == 0)
    {
        printf("Solution does not exist");
        return 0;
    }

    printSolution(board,n);
    return 1;
}


int main()
{
    int n;
    printf("Enter the number of queens: ");
    scanf("%d", &n);
    solveNQ(n);
    return 0;
}


