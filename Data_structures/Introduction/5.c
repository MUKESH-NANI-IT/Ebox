#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int rows, int cols);
void readMatrix(int **mat, int rows, int cols);
void printMatrix(int **mat, int rows, int cols);
int getColumnTotal(int **mat, int rows, int colNumber);

int main()
{
    int m, n, **matrix, colNo;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of columns\n");
    scanf("%d", &n);
    matrix = createMatrix(m, n);
    printf("Enter the elements in the matrix in rowwise order\n");
    readMatrix(matrix, m, n);
    printf("Enter the column number of the matrix\n");
    scanf("%d", &colNo);
    printf("The input matrix is\n");
    printMatrix(matrix, m, n);
    if (colNo > n)
    {
        printf("Enter a valid column number");
    }
    if (colNo <= n)
    {
        printf("The sum of the elements in column number %d is %d", colNo, getColumnTotal(matrix, m, colNo));
    }
    return 0;
}

int **createMatrix(int rows, int cols)
{
    int i;
    int **mat;
    mat = (int **)malloc(rows * sizeof(int));
    for (i = 0; i < rows; i++)
        mat[i] = (int *)malloc(cols * sizeof(int));
    return mat;
}

void readMatrix(int **mat, int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", (*(mat + i) + j));
}

void printMatrix(int **mat, int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", *(*(mat + i) + j));
        printf("\n");
    }
}

int getColumnTotal(int **mat, int rows, int colNumber)
{
    int i, total = 0;
    for (i = 0; i < rows; i++)
    {
        total = total + *(*(mat + i) + (colNumber - 1));
    }
    return total;
}