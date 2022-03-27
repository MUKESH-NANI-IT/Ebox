/*                                      Hazecraft Client Series
The number of clients of the company from the start day of their journey till now is recorded sensibly and is seemed to have followed a specific series like 2,3,5,7,11,13,17,19, 23,…, etc

Write a program that takes an integer N as the input and will output the series till the Nth term.


Note:

The given series is prime number series.

Input Format:

The first line of the input is an integer N.

Output Format:

The output is a single line series till Nth term, each separated by a space.
Refer sample input and output for formatting specifications.

Sample Input 1:

5

Sample Output 1:

2 3 5 7 11

Sample Input 2:

10

Sample Output 2:

2 3 5 7 11 13 17 19 23 29
*/
/*                                                              CODE                                                        */
#include <stdio.h>
int main()
{
    int i, j, n, c;
    scanf("%d", &n);
    i = 2;
    c = 0;
    do
    {
        int a = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                a++;
            }
        }
        if (a == 2)
        {
            printf("%d\t\t", i);
            c++;
        }
        i++;
    } while (c != n);
    return 0;
}