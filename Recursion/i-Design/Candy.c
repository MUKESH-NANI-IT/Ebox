
// Candy Quiz
 /*
Anto and Jim were best friends. They went to a nearby Super Market to get some candies, where they saw an on-the-spot event organized for the kids. The event is a one minute quiz game where two kids can participate and the winners were announced a basket full of candies.
 
Anto and Jim eagerly participated in the game and managed to answer most of the questions right. The final question came to them from the host looked a bit tricky to solve. They wanted your help to answer it and take home the candies. The question posted to them was to find the last non-zero digit of n! where the event host gave them the value of ‘n’.
 
Given 'n', write a recursive function to find the last non-zero digit of n!.

C Function Specifications:
Use the function name and the argument as:
int lastNonZeroDigit(n):
This recursive function should return the last non-zero digit of n!.

 

Python Function Specifications:
Use the function name and the argument as:
def lastNonZeroDigit(n):
This recursive function should return the last non-zero digit of n!.

Input Format:
First and only line of the input is an integer ‘n’.

Output Format:
Output the last non-zero digit of n! in a single line.
Refer sample input and output for formatting specifications.

Sample Input 1:
5

Sample Output 1:
2

Sample Input 2:
33

Sample Output 2:
8
*/
#include<stdio.h>
int lastNonZeroDigit(int n)
{
int i,j,answer=1,a2=0,a5=0,a;
for(i=1;i<=n;i++)
{
j=i;
while(j%2==0)
{
j/=2;
a2++;
}
while(j%5==0)
{
j/=5;
a5++;
}
answer=(answer*(j%10))%10;
}
a=a2-a5;
for(i=1;i<=a;i++)
{
answer=(answer*2)%10;
}
return answer;
}
int main()
{
int n;
scanf("%d",&n);
int r=lastNonZeroDigit(n);
printf("%d",r);
return 0;
}
