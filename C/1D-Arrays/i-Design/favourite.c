//Favorite Sequence
 /*
Lucarnos Film Festival is an annual film festival and is also known for being a prestigious platform for art house films. Lucy, being a movie lover visits the Lucarnos Film Festival. There were many films screened in the show, of which Lucy somehow choose the best movie of her choice and set off to watch it.

The movie which Lucy chose to watch has N sequences. A sequence is defined as a series of scenes in a movie that form a distinct narrative unit. Lucy likes a sequence better if the sequence contains her favorite sequence in the movie as a substring.
 
Given the sequence and Lucy’c favorite sequence(F) check whether her favorite sequence is contained in the sequence.
 
Input Format:
The first line of the input contains an integer N, which corresponds to the length of the sequence.
The second line of the input contains N space-separated integers, which corresponds to the sequence.
The third line of the input contains an integer n, which corresponds to the length of favorite sequence F.
The last line of the input contains n space-separated integers, which corresponds to the favorite sequence.

Output Format:
Print "Yes" (Without quotes)if the sequence contains Lucy’sfavourite sequence otherwise print "No" (Without quotes).
Refer sample input and output for formatting specifications

Sample Input 1:
6
1 2 3 4 5 6
3
2 3 4

Sample Output 1:
Yes

Sample Input 2:
6
22 5 6 33 1 4
2
4 15

Sample Output 2:
No
*/
#include<stdio.h>
int main()
{
int N=0;
int i, j;
scanf("%d",&N);
int a[N]; 
for(i=0; i<N;i++)
 {
   scanf("%d",&a[i]);
 }
int n=0;
scanf("%d",&n);
int F[n]; 
for(i=0;i<n; i++)
 {
  scanf("%d",&F[i]);
 }
for(i=0; i<N-n;i++)
{
  for(j=i;j<i+n;j++)
  {
   if(a[j]!=F[j-1])
   {
    break;
   }
  }
  if(j==n+i)
  {
    printf("Yes");
    return 0;
  }
}
printf("No");
return 0;
}
