
 // Adjacent Stick Game
 /*
Steffan and friends have set out on a vacation to Coorg. They have booked accommodation in a resort and the resort authorities organize Camp fires every night as a part of their daily activities. Steffan volunteered himself for an activity called the "Adjacent Stick Game" where sticks of different length will be placed in a line and Steffan needs to remove a stick from each adjacent pair of sticks. He then has to form a bigger stick by combining all the remaining sticks.
 
Steffan needs to know the smallest length of the bigger stick so formed and needs your help to compute the same. Given the number of sticks N and the lengths of each of the sticks, write a program to find the smallest length of the bigger stick that is formed.
 
Input Format:

First line of the input contains an integer N denoting the number of sticks. Assume that the maximum value for N as 50.
Assume that N is always even.
Next line of input contains an N integer denoting the length of each of the sticks.

Output Format:

Output the smallest length of the bigger stick that is formed.
Refer sample input and output for formatting specifications.
 

[All text in bold corresponds to the input and the rest corresponds to output.]


Sample Input and Output 1:

4
2 1 3 1
2

Sample Input and Output 2:

8
2 3 1 4 3 2 1 4
6
*/

#include<stdio.h>
int main()
{
int n,i;
 scanf("%d",&n);
  int arr[n]; 
  for(i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   } 
int res=0;
for(i=0; i<n; i=i+2)
{
if(arr[i]>arr[i+1])
  {
   res=res+arr[i+1];
  }
else
  {
   res=res+arr[i];
  } 
}
printf("%d", res);  
return 0;
}