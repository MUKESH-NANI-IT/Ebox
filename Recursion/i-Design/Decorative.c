
//Decorative Tiles
 /*
Carlton Inn is planning to organize a Food Festival bringing together at one place, a wide variety of cuisines from across the world on account of Christmas. The Hotel Management has rented out a hall of an indoor Auditorium for this extravaganza.
 
The Event hall was of area N*M and the coordinators planned to decorate the hall’s flooringwith carpet tiles embellishing the opulence of the event. They have infinite number of tiles of size 2i X 2i, where i = 0, 1, 2,… so on. Their task is to find minimum number of tiles required to fill the given area with tiles.
 
Help them accomplish their task by writing a recursive function that finds the minimum number of tiles required to fill the given area with tiles.

C Function Specifications:
Use the function return type and the argument type as:
int minimumTiles(int,int)
This recursive function should return the minimum count of tiles required.

Python Function Specifications:
Use the function return type and the argument type as:
def minimumTiles(int,int)
This recursive function should return the minimum count of tiles required.

Input Format:
First line of the input is an integer ‘N’.
Second line of the input is an integer ‘M’.

Output Format:
Output an integer in a single line that gives the minimum count of tiles required.
Refer sample input and output for formatting specifications.

Sample Input 1:
5
6

Sample Output 1:
9

Sample Input 2:
4
4

Sample Output 2:
1
*/
#include<stdio.h>
#include<stdlib.h>
int prevPower(int n)
{
int p=1;
if(n&&!(n&(n-1)))
{
return n;
}
while(p<n)
{
p<<=1;
}
return p>>1;
}
int minimumTiles(int n,int m)
{
if(n<m)
{
n=n+m;
m=n-m;
n=n-m;
}
int x=prevPower(m);
if(x==m && x==n)
{
return 1;
}
if(m<=1 || n<=1)
{
return m*n;
}
return minimumTiles(n-x,m)+minimumTiles(x,m-x)+1;
}
int main()
{
int m,n;
scanf("%d%d",&n,&m);
printf("%d",minimumTiles(n,m));
return 0;
}