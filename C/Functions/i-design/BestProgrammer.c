//       Best Programmer
 /*
Baldwin High School's Best Programmer Contest is organized today and the contest hones the students coding skills by making them solve different challenges. Based on the speed and accuracy with which the students finish the challenges, the Event coordinators will rank the participants and reward them.
 
The entry level challenge was just one problem which the students has to program for. The problem reads like:
 
A positive integer, n, is said to be perfect  if the sum of its proper divisors equals the number itself. (Proper divisors include 1 but not the number itself.) If this sum is less than n, the number is deficient, and if the sum is greater than n, the number is abundant.
 
The Event coordinators wanted to prepare the answer key for all the problems given in the contest so as to evaluate the submissions of the participants. Write a program using functions that reads a positive integer, determines if the integer is perfect, abundant or deficient and outputs the number along with its classification.
 
C and JAVA Function Specifications:
Use the function name and the argument as:
int findType(n):
The Function should return 1 if the given integer is a deficient number, return 0 if it is a perfect number and return -1 if it is a abundant number.

Python Function Specifications:
Use the function name and the argument as:
def findType(n):
The Function should return 1 if the given integer is a deficient number, return 0 if it is a perfect number and return -1 if it is a abundant number.
 
Input Format:
The input consists of an integer that corresponds to the given number.

Output format:
Output should display if the given number is a perfect, abundant or deficient number.
Refer sample input and output for formatting specifications.

Sample Input 1:
4
Sample Output 1:
4 is a deficient number

Sample Input 2:
6
Sample Output 2:
6 is a perfect number

Sample Input 3:
12
Sample Output 3:
12 is an abundant number
*/

/*                                                              CODE                                                        */
#include<stdio.h>
int findType(int n)
{
int sum=0;
for(int i=1;i<n;i++)
{
if(n%i==0)
{
sum+=i;
}
}
if(sum<n)
{
return 1;
}
else if(sum>n)
{
return -1;
}
else
{
return 0;
}
}
int main()
{
int n;
scanf("%d",&n);
int res=findType(n);
if(res==0)
{
printf("%d is a perfect number\n",n);
}
else if(res==-1)
{
printf("%d is ana abundant number\n",n);
}
else
{
printf("%d is a deficient number\n",n);
}
return 0;
}