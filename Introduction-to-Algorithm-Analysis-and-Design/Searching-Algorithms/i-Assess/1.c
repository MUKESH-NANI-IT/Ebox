/*Sorting as Twisted Matrix
 
A matrix of same rows and same columns is given. Pooja wants to Sort the matrix in such a manner that she will start from the first element and traverse the matrix in clockwise manner at the end, and she should be at the middle position with a largest element.Find the solution of Pooja's problem.

Input Format:
First line will take an integer input as dimension of matrix i.e. N x N (only one input N).
Second input the elements of matrix.

Output Format:
Sorted Matrix in clockwise manner.
(For more description, see the explanation)

Constraints:
0<N<10
 
Sample Input:
3
2 5 12
22 45 55
1 6 8

Sample Output:
1 2 5
45 55 6
22 12 8

Explanation:
The output is as below twisted matrix contains sorted elements in clockwise order.

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void sort_matrix(int arr[MAX][MAX],
                 int N, int M)
{

    // Traverse over the matrix
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < M; j++)
        {

            // Current minimum element
            int minimum = arr[i][j];

            // Index of the current
            // minimum element
            int z = i;
            int q = j;

            // Check if any smaller element
            // is present in the matrix
            int w = j;

            for (int k = i; k < N; k++)
            {

                for (; w < M; w++)
                {

                    // Update the minimum element
                    if (arr[k][w] < minimum)
                    {

                        minimum = arr[k][w];

                        // Update the index of
                        // the minimum element
                        z = k;
                        q = w;
                    }
                }
                w = 0;
            }

            // Swap the current element
            // and the minimum element
            int temp = arr[i][j];
            arr[i][j] = arr[z][q];
            arr[z][q] = temp;
        }
    }
}
int[] spiralMatrix(int arr[MAX][MAX],
                  int N, int M)
{
    // Sort the matrix
    sort_matrix(arr, N, M);
    int k = 0, l = 0;
    while (k < M && l < N)
    {
        for (i = l; i < N; i++)
        {
            printf("%d ", arr[k][i]);
        }
        k++;
        for (i = k; i < M; i++)
        {
            printf("%d ", arr[i][N - 1]);
        }
        N--;
        if (k < M)
        {
            for (i = N - 1; i >= 0; --i)
            {
                printf("%d ", arr[M - 1][i]);
            }
            M--;
        }
        if (l < N)
        {
            for (i = M - 1; i >= k; i--)
            {
                printf("%d ", arr[i][l]);
            }
            l++;
        }
    }
    return arr;

}
// Function to print the sorted matrix
void printMat(int arr[MAX][MAX],
              int N, int M)
{
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < M; j++)
        {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{   
    int n,m;
    scanf("%d",&n);
    m=n;
    int arr[MAX][MAX], min, i, j, tmp, y, k, w, z = 0, q = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    int new[MAX]=spiralMatrix(arr, n, m);
    printMat(arr, n, n);
}