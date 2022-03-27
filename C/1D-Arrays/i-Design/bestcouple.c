
// Best Couple Event
 /*
"Shades" Television Channel organizes a fun-filled event named "Best Couple 2017", where in married couples would be invited and given many tasks and activities. Based on some criteria decided by the jury, a best couple will be chosen.
N couples registered for the event and each couple was given a registration number(it may repeat). One specific couple's registration Id got missed. The event coordinators wanted your help in finding the missing Id.
Write a program which takes an array of registration numbers as input and outputs the missing registration Id.

Input Format:
First line of the input contains the number of couples N who registered for the event. Assume that the maximum value for N as 50.
Second line of input contains N registration Id of each of the couple, separated by a space.

Output Format:
Output in a single line the missing registration Id.
Refer sample input and output for formatting specifications.

Sample Input 1:
3
1 2 1

Sample Output 1:
2

Sample Input 2:
5
1 1 2 2 3

Sample Output 2:
3
*/

#include<stdio.h> 
int main()
{
int n;
scanf("%d",&n);
int arr[n];
int res=0;
for (int i=0;i<n;i++){
scanf("%d",&arr[i]);
res=res^arr[i];
}
printf("%d",res);
 return 0;

}