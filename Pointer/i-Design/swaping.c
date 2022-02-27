//   Swapping 2 numbers

/*
Mrs. Anitha , our favourite Maths teacher wanted to teach her students to swap two elements.
Write a program to accept 2 integers and to swap them using functions and pointers.

Function Specification:
void swap(int *a,int *b)
This functions swaps 2 integers.

Input Format:
The input consists of 2 integer.

Output Format:
Refer to the sample input and output for formatting details.
[All text in bold corresponds to input and the rest corresponds to output.]

Sample Input and Output:
Enter the value of a
5
Enter the value of b
3
Before swapping
a = 5 b = 3
After swapping
a = 3 b = 5
*/

/*                                                          CODE                                                                                */
#include <stdio.h>
void swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
int main()
{
  int a, b;
  printf("Enter the value of a\n");
  scanf("%d", &a);
  printf("Enter the value of b\n");
  scanf("%d", &b);
  printf("Before swapping\na = %d b = %d\n", a, b);
  swap(&a, &b);
  printf("After swapping\na = %d b = %d\n", a, b);
  return 0;
}
