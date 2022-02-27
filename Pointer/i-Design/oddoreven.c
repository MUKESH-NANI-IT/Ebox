///     Odd or Even
/*
Mrs. Anitha , our favourite Maths teacher wanted to teach her students to check whether the given number is odd or even.
Write a program to accept an integer and to check whether the given number is odd or even using functions and pointers.

Note: Print the text "a is an odd number " and "a is an even number" inside the function.

Function Specification:
void oddoreven(int *a)
This function prints the text "a is an odd number" if the number is odd, else prints "a is an even number" if the number is even.

Input Format:
The input consists of an integer.

Output Format:
Refer to the sample input and output for formatting details.
[All text in bold corresponds to input and the rest corresponds to output.]

Sample Input and Output1:
Enter the number
5
5 is an odd number

Sample Input and Output2:
Enter the number
6
6 is an even number
Function Definitions:
void oddoreven (int *)
*/

/*                                                          CODE                                                                                */
#include <stdio.h>
void oddoreven(int *a)
{
    int i = *a;
    if (i % 2 == 1)
    {
        printf("%d is an odd number", *a);
    }
    if (i % 2 == 0)
    {
        printf("%d is an even number", *a);
    }
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    oddoreven(&a);
    return 0;
}