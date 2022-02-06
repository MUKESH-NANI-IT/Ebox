
//     Right Triangle of Dots
 /*
The much awaited event at the entertainment industry every year is the "Screen Awards". This year the event is going to be organized on December 25 to honour the Artists for their professional excellence in Cinema. The Organizers of the event, J&R Events, decided to design the logo of the Screen Awards as a digitalized image and display it on the LED panel boards for the show promotions all across the venue. The Event team wanted to border the logo with right triangles which will describe it better.
 
For this purpose, the Event development team are in the task to find if N dots can make a right triangle or not (all N dots must be used). Given N dots, we can make it look like a Right Triangle (45-45-90 triangle) exactly with N dots. Rearrange the given N dots, like this:



Your task is to help the team write a program using functions to find if N dots can make a right triangle or not.

C Function Specifications:
Use the function name and the argument as:
int find(n):
The function must return 1 if you can make a right triangle using N dots, else return 0.

PythonFunction Specifications:
Use the function name and the argument as:
def find(n):
The function must return 1 if you can make a right triangle using N dots, else return 0.

Input Format:
First line of the input consists of an integer N.

Output Format:
Output "Yes" (without quotes) if you can make a right triangle using N dots, otherwise "No"(without quotes).
Refer sample input and output for formatting specifications.

Sample Input 1:
6
Sample Output 1:
Yes

Sample Input 2:
4
Sample Output 2:
No
*/

#include<stdio.h>
int find(int);
int main()
{
    int N;
    scanf("%d",&N);
    if (N>0)
    {
    if (find(N))
    {
        
      printf("Yes");
    }

    else
    {
        printf("No");
    }
    }
    return 0;
}
int find (int n)
{
    int x,i;
    for ( i = 1; i <=n; i++)
    {
        if (n==(i*(i+1))/2)
        {
            x=i;
            break;
        }
    }
    if(n==(x*(x+1))/2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

