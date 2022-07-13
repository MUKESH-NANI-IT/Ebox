#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int lcs( char *X, char *Y, int m, int n )
{
  
  
  
  if (m == 0 || n == 0)
      return 0;
  if (X[m - 1] == Y[n - 1])
      return 1 + lcs(X, Y, m - 1, n - 1);
  else
      return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}


int main()
{
  char X[100];
  char Y[100];
  
  printf("Enter string 1\n");
  scanf("%s",X);
  
  printf("Enter string 2\n");
  scanf("%s",Y);
  
  int m = strlen(X);
  int n = strlen(Y);
  
  printf("Length of Longest Common Subsequence is %d\n", lcs( X, Y, m, n ) );
  
  return 0;
}