//       Nice Number
 /*
"The Greatest Furniture Expo" is a biggest fair exhibiting furniture products, services and equipment, interior services, decoration plans, modular kitchen accessories, bedroom furniture, stylish sittings etc in the Furniture industry. It is a 4-day event and on the inaugural day of the event, the Event coordinators have announced for a Lucky lottery contest.
 
According to the Lucky lottery, the visitors’ entry tickets are collected and the visitors whose ticket numbers are nice numbers are chosen as winners and attractive discount coupons are distributed to the winners. A nice number is a positive integer which has exactly 4 divisors.
 
The Event coordinators wanted to know if a specific’s entry ticket number is a nice number or not. Write a program using functions which determines if a given number is a nice number or not.
 
C Function Specifications:
Use the function and the argument as:
int findType(n):
The Function should return 1 if the number is nice or return 0 if it is not a nice number.

Python Function Specifications:
Use the function and the argument as:
def findType(n):
The Function should return 1 if the number is nice or return 0 if it is not a nice number.
 
Input Format:
First line of the input is an integer that corresponds to the entry ticket number of avisitor.

Output Format:
Output should display "Nice" if the given ticket number is a nice number. Print "Not Nice" otherwise.
Refer sample input and output for formatting specifications.

Sample Input 1:
6
Sample Output 1:
Nice

Sample Input 2:
4
Sample Output 2:
Not Nice
*/
/*                                                              CODE                                                        */
#include<stdio.h>
int findType(int);
int main()
{
    int n;
    scanf("%d",&n);
    if (n>0)
    {
     if (findType(n)==1)
     {
         printf("Nice");
     }
     if(findType(n)==0)
     {
         printf("Not Nice");
     }
     
    }
    return 0;
}   
    int findType(int n)
    {
        int i,count=0;
        for ( i = 1; i <=n; i++)
        {
         if(n%i==0)
         {
             count++;
         }
        }
        if(count==4)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    } 
