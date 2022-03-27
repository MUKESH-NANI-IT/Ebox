// Co-Partners in Train
/*
Tim and Bob are off to a famous Education Fair "Knowledge Forum 2017" at Uzhlanda. This time they have to travel without their guardians. Tim got very interested in the arrangement of seats inside the train coach.
The entire coach could be viewed as an arrangement of consecutive blocks of size 8.

BerthNumber	Compartment
1-8	1
9-16	2
17-24	3
... and so on
Each of these size-8 blocks are further arranged as:
1LB,  2MB,  3UB,  4LB,  5MB,  6UB,  7SL,  8SU
9LB, 10MB, ...
.......
.......Here LB denotes lower berth, MB middle berth and UB upper berth.

The following berths are called Co-Partners in Train:
3 UB	6 UB
2 MB	5 MB
1 LB	4 LB
7 SL	8 SUand the pattern is repeated for every set of 8 berths.
Tim and Bob are playing this game of finding the co-partner in train of each berth. Write a program to do the same.

Input Format:
The input consists of an integer N, which corresponds to the berth number whose neighbor is to be found out.

Output Format:
The output is to display the berth of the neighbor of the corresponding seat.
Refer sample input and output for formatting specifications.

Sample Input 1:
1

Sample Output 1:
4LB
*/

/*                                                              CODE                                                        */
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    b = a;
    if (b > 8)
    {
        a = b % 8;
        if (a == 0)
        {
            a = a + 8;
        }
    }
    if (a == 1)
    {
        printf("%dLB", b + 3);
    }
    if (a == 2)
    {
        printf("%dMB", b + 3);
    }
    if (a == 3)
    {
        printf("%dUB", b + 3);
    }
    if (a == 4)
    {
        printf("%dLB", b - 3);
    }
    if (a == 5)
    {
        printf("%dMB", b - 3);
    }
    if (a == 6)
    {
        printf("%dUB", b - 3);
    }
    if (a == 7)
    {
        printf("%dSU", b + 1);
    }
    if (a == 8)
    {
        printf("%dLB", b - 1);
    }
}