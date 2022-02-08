 //      Winter Challenge
 /*
Swapna is a regular reader of Youth Digest magazine. The magazine has a whole host of fun and interesting facts from around for the youth especially that encourage interactivity and enhances their imagination.
 
"Winter Challenge" is an event announced in the December month edition of the magazine. Readers of the magazine who are between 10 to 15 years can participate in the special challenge. Those readers who participate and give the correct answer for the challenge will avail exciting gift coupons. According to the event, the challenge published was:
 
Given 0 < x < m, where x and m are integers, the modular inverse of x is the unique integer n, 0 < n < m, such that the remainder upon dividing x × n by m is 1. For example, 4 x 13 = 52 = 17 x 3 + 1, so the remainder when 52 is divided by 17 is 1, and thus 13 is the inverse of 4 modulo 17.
 
Swapna wants your help to find the correct answer for the problem based on the inputs given in the magazine. You are to write a program which accepts as input the two integers x and m, and outputs either the modular inverse n, or -1 if there is no such integer n. You may assume that m ≤ 900.
 
C Function Specifications:
Use the function name and the argument as:
int findValue(x,m)
The Function should return the appropriate value or return -1 if no such value exists.

Python Function Specifications:
Use the function name and the argument as:
def findValue(x,m)
The Function should return the appropriate value or return -1 if no such value exists.

Input Format:
First line of the input is an integer that corresponds to x.
Second line of the input is an integer that corresponds to m.

Output format:
Output should display the appropriate value or print -1 otherwise.
Refer sample input and output for formatting specifications.

Sample Input 1:
4
17
Sample Output 1:
13

Sample Input 2:
6
10
Sample Output 2:
-1

*/
 /*                                                              CODE                                                        */
#include<stdio.h>
int findValue(int x,int m)
{
int i,k=-1;
for(i=1;i<m;i++)
{
if(((x%m)*(i%m))%m==1)
{
k=i;
}
}
return k;
}
int main()
{
int x,m,a;
scanf("%d\n%d",&x,&m);
if(x>0 && m>0 && m<=900)
{
a=findValue(x,m);
if(a==-1)
{
printf("-1");
}
else
{
printf("%d",a);
}
return 0;
}
return 0;
}