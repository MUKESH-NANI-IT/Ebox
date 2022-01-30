/*
                               Character Pattern 8
Write a program to generate the following pattern.
*********
b******* b
bb***** bb
bbb***bbb
bbbb*bbbb


Input and Output Format:
Input consists of a single integer that corresponds to n, the number of rows. n is always an odd number.

Sample Input :
5

Sample Output :
*********
b******* b
bb***** bb
bbb***bbb
bbbb*bbbb*/

// CODE
#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n * 2; j++)
        {
            if (i >= j || j >= n * 2 - i)
                printf("b");
            else
                printf("*");
        }
        printf("\n");
    }
    return (0);
}