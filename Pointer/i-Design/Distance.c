
//   Distance between 2 points
/*
Mrs. Anitha , our favourite Maths teacher wanted to teach her new batch students to find the distance between 2 points.
Write a program to accept 2 points and to calculate the distance between them using functions and pointers.

Function Specification:

float distance(int *x1, int *y1, int *x2, int *y2)
This function returns the distance between two points.

Input Format:
Input consists of 4 integers.
The first 2 integers refer to x and y coordinate of Point 1
The next 2 integers refer to x and y coordinate of Point 2

Output Format:
The output consists of 1 float. Display the output correct to 2 decimal places.

[All text in bold corresponds to input and the rest corresponds to output]

Sample Input and Output:
Enter x1
2
Enter y1
3
Enter x2
4
Enter y2
1
Distance between 2 points is 2.83
Function Definitions:
float distance (int *, int *, int *, int *)
*/

/*                                                          CODE                                                                                */
#include <stdio.h>
#include <math.h>
float distance(int *x1, int *y1, int *x2, int *y2)
{
    int a, b, c, d;
    float t;
    a = *x1;
    b = *x2;
    c = *y1;
    d = *y2;
    t = (float)sqrt((b - a) * (b - a) + (d - c) * (d - c));
    return t;
}
int main()
{
    int a1, b1, a2, b2;
    printf("Eneter x1\n");
    scanf("%d", &a1);
    printf("Eneter y1\n");
    scanf("%d", &b1);
    printf("Eneter x2\n");
    scanf("%d", &a2);
    printf("Eneter y2\n");
    scanf("%d", &b2);
    int *x1 = &a1;
    int *x2 = &a2;
    int *y1 = &b1;
    int *y2 = &b2;
    float z = distance(x1, y1, x2, y2);
    printf("Distance between 2 points is %0.2f", z);
    return 0;
}