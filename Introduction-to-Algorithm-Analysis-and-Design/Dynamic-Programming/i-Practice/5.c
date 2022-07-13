
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int kadane(int* arr, int* start, int* finish, int n)
{
    /*---------------Fill your code here--------------*/

    int sum = 0, maxSum = INT_MIN, i;



    *finish = -1;


    int local_start = 0;

    for (i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i + 1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }


    if (*finish != -1)
        return maxSum;
    maxSum = arr[0];
    *start = *finish = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}
 
void findMaxSum(int **M,int ROW,int COL)
{
    int maxSum = INT_MIN,
        finalLeft,
        finalRight,
        finalTop,
        finalBottom;

    int left, right, i;
    int temp[ROW], sum, start, finish;

    for (left = 0; left < COL; ++left)
    {
        memset(temp, 0, sizeof(temp));

        for (right = left; right < COL; ++right)
        {
            for (i = 0; i < ROW; ++i)
                temp[i] += M[i][right];
            sum = kadane(temp, &start, &finish, ROW);
        if (sum > maxSum)
            {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }
    
    printf("Parameters of the maximum sum rectangle:\n");
    printf("Top Left coordinate is (%d, %d)\n", finalTop, finalLeft);
    printf("Bottom Right coordinate is (%d, %d)\n", finalBottom, finalRight);
    printf("Max sum is %d\n", maxSum);
}
 

int main()
{	
    int ROW,COL,**M,i,j;
    printf("Enter the number of rows in the matrix\n");
    scanf("%d",&ROW);
    printf("Enter the number of columns in the matrix\n");
    scanf("%d",&COL);
    M = (int**)malloc(sizeof(int*)*ROW);
    for(i=0;i<ROW;i++){
        *(M+i) = (int*)malloc(sizeof(int)*COL);
    }
    printf("Enter the elements of the Matrix\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            scanf("%d",*(M+i)+j);
        }
    }
    findMaxSum(M,ROW,COL);
 
    return 0;
}