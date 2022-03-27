
// Friendship Test
 /*
Michael is celebrating his 10th birthday and he wished to arrange a party to all his class mates. But there are n tough guys amongst his class who are weird. They thought that this is the best occasion for testing their friendship with him. They put up conditions before Michael that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.
 
Michael is not a lavish spender and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what the maximum number of friendships he can save.
Please help Michael in this difficult task.
 
Input Format:
First line will contain a single integer denoting n. Assume that the maximum value for n as 50.
Second line will contain n space separated integers where ith integer corresponds to the day dith as given in the problem.

Output Format:
Print a single line corresponding to the maximum number of friendships Michael can save.
Refer sample input and output for formatting specifications.

Sample Input 1:
2
3 2

Sample Output 1:
2

Sample Input 2:
5
4 1 3 7 5

Sample Output 2:
5

Sample Input 3:
6
1 2 3 3 2 1
Sample Output 3:
3
*/




#include<stdio.h>
int main()
{
int i,j,k,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
  for(i=0;i<n; i++)
   {
    for(j=i+1;j<n; j++)
    {
      if(arr[i]==arr[j])
      {
        for(k=j; k<n-1; k++)
        {
          arr[k]=arr[k+1];
        }
        n--;
        j--;
      }
    }
   }
   printf("%d \t",n); 
   return 0;
}