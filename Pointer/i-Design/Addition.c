/*Addition of two numbers

Mrs. Anitha, our favourite Maths teacher wanted to teach her new batch students to find the sum of two numbers using pointers. In their first attempt, all her students computed the sum wrongly. She taught them the concept of pointers, pass by value, and pass by reference and she again gave the same problem to the students. All the students answered the problem correctly and Mrs. Anitha was happy.
Write a program to accept 2 integers and to calculate the sum of 2 numbers using functions and pointers.

Note: Print the text "Sum of two elements = " inside the function.

Function Specification:
void addition(int *a,int *b)
This function calculates the sum of 2 numbers.

Input Format:
The input consists of 2 integers.

Output Format:
The output consists of 1 integer.

[All text in bold corresponds to input and the rest corresponds to output]

Sample Input and Output :

Enter the value of a
5
Enter the value of b
-3
Sum of two elements = 2
*/

/*                                          CODE                                                    */
#include <stdio.h>
void addition(int *a, int *b)
{
    int s;
    s = *a + *b;
    printf("Sum of two elemnts = %d", s);
}
int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    addition(&a, &b);
    return 0;
}
