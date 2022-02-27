/*Illustration of Pointer
Few of the students in a class started playing the game during their leisure hours. In this game, there were cards with numbers written on it. Each person needs to pick 2-cards from this set. The two-cards are denoted as A and B. The goal of the game is to modify the value of A and B. A should be modified as absolute sum of A and B and B should be modified as the absolute difference between A and B. The resultant A and B should always be positive.

Write a program to find the modified values of A and B to accomplish this goal using functions and pointers.

Function specifications:
void changeValue(int *a, int *b)
This function changes the value of A and B as per problem description.

Input Format:
Input will contain two integers, A and B.

Output Format:
Print the updated value of A and B.
Refer to sample input and output for formatting specifications.

Sample Input:
5
7
Sample Output:
12
2
*/

/*                                                          CODE                                                                                */
#include <stdio.h>
#include <stdlib.h>
void changeValue(int *a, int *b)
{
    int c1, c2;
    c1 = *a;
    c2 = *b;
    *a = c1 + c2;
    if (*a < 0)
    {
        *a = *a * (-1);
    }
    *b = c1 - c2;
    if (*b < 0)
    {
        *b = *b * (-1);
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    changeValue(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
