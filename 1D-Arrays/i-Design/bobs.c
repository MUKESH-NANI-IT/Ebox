
// Bob's Challenge
 /*
Stella and friends have set out on a vacation to Manali. They have booked accommodation in a resort and the resort authorities headed by Bob, organize Campfires every night as a part of their daily activities. Stella volunteered herself for an activity called the "Stick Game".

Stella was given a total of N sticks. The length of i-th stick is Ai. Bob insists Stella choose any four sticks and make a rectangle with those sticks as its sides. Bob warns Stella not to break any of the sticks, she has to use sticks as a whole.
 
Also, Bob wants that the rectangle formed should have the maximum possible area among all the rectangles that Stella can make. Stella takes this challenge up and overcomes it. You have to help her know whether it is even possible to create a rectangle. If yes, then tell the maximum possible area of the rectangle.
 
Input Format:
The first line of the input contains a single integer N denoting the number of sticks.
The second line of each test case contains N space-separated integers A1, A2, ...,AN denoting the lengths of sticks.

Output Format:
Output a single line containing an integer representing the maximum possible area for rectangle or output -1, if it's impossible to form any rectangle using the available sticks.
Refer sample input and output for formatting specifications.

Sample Input 1:
5
1 2 3 1 2

Sample Output 1:
2

Sample Input 2:
4
1 2 2 3

Sample Output 2:
-1
*/

#include<stdio.h> 
int Bob(int a[], int n)
{
int i, j,k=2;
for(i=0; i<n; i++)
{
 for(j=0; j<n; j++)
   {
    if(a[i]==a[j])
     {
         k--;
     }
      if (k==0)
      {
     break;
      }
     if(j==n-1) 
     {
       a[i]=0;
     }
   }
    k=2;
}
k=a[0];
for(i=0;i<n;i++)
  {
   if(a[i]>k)
    {
     k=a[i];
    }
  }
   j=0;
    for(i=0; j<2; i++)
    {
     if(k==a[i])
      {
       a[i]=0;
        j++;
      }
    }
    return k;
}
int main()
{
int n,i, k=2, l=0; 
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=Bob(a,n); 
l=Bob(a,n); 
int ans=l*k;
if (ans==0) 
{
printf("-1");
}
else
{
    printf("%d",ans);
}
return 0;
}