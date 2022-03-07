
//  Art Competition
 /*
Ocean Awareness Art Competition is a yearly art competition that engages students to promote the need to preserve, protect, and restore the world’s oceans and aquatic resources.  The Contest was organized at an outdoor auditorium in the City and large mass of school kids is expected to participate.
 
Every student participating in the contest will be registered at the venue entrance and be provided with an enrollment Id. To ensure the safety of the students, the Event organizers decided to make a disciplined seating arrangement by sticking the students’ enrollment Id on the chairs. There were N enrollments approximately expected for the contest and based on this, the event organizers wanted to print the enrollment numbers in white sheets to stick to the chairs.
 
You are to help the organizers in taking the printed formats of the enrollment numbers. Write a recursive function to print the enrollment numbers from 1 to N without the help of Loops.

Python Function Specifications:
Use the function name and the argument as:
def printnumbers(n)
This recursive function should print the enrollment numbers from 1 to N without using loops.

 

C Function Specifications:
Use the function name and the argument as:
void printnumbers(n)
This recursive function should print the enrollment numbers from 1 to N without using loops.
 


Input Format:
First line of the input is an integer N.

Output Format:
Output the enrollment numbers from 1 to N without using loops.
Refer sample input and output for formatting specifications.

Sample Input 1:
4

Sample Output 1:
1 2 3 4

Sample Input 2:
1

Sample Output 2:
1
*/
#include<stdio.h>
void printnumbers(int n)
{
    if(n>0)
    {
        printnumbers(n-1);
        printf("%d ",n);
    }
    return;
}
int main()
{
    int N;
    scanf("%d",&N);
    printnumbers(N);
    return 0;
}