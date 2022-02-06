/*
                                                                    Expression Evaluation

In the Mini project, 7th module is to evaluate the expression y = x + x^2+........+x^n. Rita allotted this function to Malini. Collect and display the values returned by the called function. Test your program and report the results obtained.
Help Malini to write a program to evaluate the expression?

Get the value of x and n from the user as input


Function Specification:
int calculate(int,int);
where the first argument corresponds to the value of x and second corresponds to n.

Note:

Please use the same prompt statements given in the sample input and output

Input Format:
The first line of the input contains an integer x.
The second line of the input contains an integer n (n>=0).

Output Format:
Output displays an integer.
Note: If n = 0, print 1.
Refer sample input and output for formatting details.

[ All text in bold corresponds to Input and the rest output ]
Sample Input and Output:
Enter the value of x
2
Enter the value of n
3
The result is
14

Function Definitions:
int calculate (int,int)
*/
//                                  CODE
#include <stdio.h>
int calculate(int, int);
int power(int, int);

int main()
{
    int x, n;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int evaluation = calculate(x, n);
    printf("the result is \n%d", evaluation);
    return 0;
}
int calculate(int x, int n)
{
    int result = 0;
    if (n == 0)
    {
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        result += power(x, i);
    }
    return result;
}
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return (base * power(base, (exponent - 1)));
    }
}