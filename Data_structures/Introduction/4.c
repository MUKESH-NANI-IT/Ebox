#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int rows, int cols);
void readMatrix(int **mat, int rows, int cols);
void printMatrix(int **mat, int rows, int cols);
int getRowTotal(int **mat, int cols, int rowNumber);

int main()
{
    int m, n, **matrix, rowNo;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of columns\n");
    scanf("%d", &n);
    matrix = createMatrix(m, n);
    printf("Enter the elements in the matrix in rowwise order\n");
    readMatrix(matrix, m, n);
    printf("Enter the row number of the matrix\n");
    scanf("%d", &rowNo);
    printf("The input matrix is\n");
    printMatrix(matrix, m, n);
    if (rowNo > m)
    {
        printf("Enter a Valid row number");
    }
    else
    {
        printf("The sum of the elements in row number %d is %d", rowNo, getRowTotal(matrix, n, (rowNo - 1)));
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

int getRowTotal(int **mat, int cols, int rowNumber)
{
    int i, total = 0;
    for (i = 0; i < cols; i++)
    {
        total = total + *(*(mat + rowNumber) + i);
    }
    return total;
}