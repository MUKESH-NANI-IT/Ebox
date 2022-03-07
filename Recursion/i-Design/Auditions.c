
// Auditions
 /*
"Singing Champs" is a famous reality series. The show organizers have planned to roll out the show’s 5th season in the coming month. The auditions for the show is announced at various Cities widely and the organizers have inaugurated the first audition today.
 
Large mass of people gathered at the venue. Based on the selection procedure for the first level, all the people are made to stand in a queue. Participants who are standing in the even positions of the queue are selected initially. Of the selected people a queue is formed and again out of these only people on even position are selected. This continues until we are left with one person.
 
To help them in the selection procedure, the organizers approached you to write a recursive function for determining the position of that final person in the original queue.

C Function Specifications:
Use the function name and the argument as:
int findPos(n):
This recursive function should return the position(original queue) of that person who is left.

 

Python Function Specifications:
Use the function name and the argument as:
def findPos(n):
This recursive function should return the position(original queue) of that person who is left.

Input Format:
First and only line of the input is an integer N that corresponds to the total number of people who came for the auditions.

Output Format:
Output the position(original queue) of that person who is left.
Refer sample input and output for formatting specifications.

Sample Input 1:
5

Sample Output 1:
4

Sample Input 2:
180

Sample Output 2:
128
*/
#include<stdio.h>
#include<math.h>
int bitlength(int n)
{
int c=0;
while(n)
{
c++;
n>>=1;
}
return --c;
}
int findPos(int n)
{
return (1<<bitlength(n));
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",findPos(n));
return 0;
}