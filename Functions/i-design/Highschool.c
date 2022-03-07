//   High School TopCoder
 /*
Green Wood High School is set to premier a programming tournament for high school-aged math and science students across the country. Based on this contest, the school has called in for all the interested candidates to take up a qualifying test at the school premises.
 
Before the qualifier, the Event coordinators chose the problemsets and wanted to code it beforehand to ease the evaluation procedure. They wanted your help to code few of the problemsets, one of which was involving Fibonacci series. We all know the Fibonacci sequence, each term of it is the sum of the two previous terms. In this problem, we need to find just the last digit of a Fibonacci series termed as F(n), where n is got as input. Write a program using functions to output the last digit of the term F (n).
 
C Function Specifications:
Use the function name and the argument as:
int fiboLastDigit(n)
The function must return the last digit of the tem F(n).

Python Function Specifications:
Use the function name and the argument as:
def fiboLastDigit(n)
The function must return the last digit of the tem F(n).

Input Format:
The input consists of an integer n(0 <= n <= 10000).

Output Format:
Output the last digit of the term F (n).
Refer sample input and output for formatting specifications.

Sample Input 1:
5
Sample Output 1:
5

Sample Input 2:
9
Sample Output 2:
4
*/
/*                                                              CODE                                                        */
#include<stdio.h>
int fiboLastDigit(int num)
{
    int n1, n2, temp;
    n1 = n2 = 1;
    if (num == 0)
    {
        return 0;
    }
    if (num == 1 || num == 2)
    {
        return 1;
    }
    for (int i = 2; i < num; i++)
    {
        temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }
    int res = n2 % 10;
    return res;
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fiboLastDigit(num));
    return 0;
}