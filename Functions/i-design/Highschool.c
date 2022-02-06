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

#include<stdio.h>
int fiboLastDigit(int);
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=0 && N<=10000)
    {
        int y=fiboLastDigit(N);
        printf("%d",y);
    }
    return 0;
}
int fiboLastDigit(int n)
{
    int t1=1,t2=1;
    int next=t1+t2;
    if (n==0)
    {
        return 0;
    }
    if (n==1 || n==2)
    {
     t1=t1%10;
     return next;
    }
    else
    {
        for (int i = 4; i <=n; i++)
        {
            t1=t2;
            t2=next;
            next=t1+t2;
        }
        int m=next%10;
        return m;
    }
}