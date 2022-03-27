
  // To the Magic Show
 /*
The Magic Castle, the home of the Academy of Magical Arts has organized the great 'WonderWorks Magic Show'. Renowned magicians were invited to mystify and thrill the crowd with their world’s spectacular magic tricks. Rahul has promised to take his little kids Akash and Anusha to this renownedshow.
 
Unfortunately Rahul got a bit late to return from work, but he did not want to disappoint the kids.So he started off with themto the show in his car.He thought to take a short route to reach the show on time but he was not sure if it is possible to reach the magic show venue at the point (x2, y2) from his house which is at a point (x1, y1).
 
Given coordinates of a source point (x1, y1), write a recursive function to determine if it is possible to reach the destination point (x2, y2).
 
Note: From any point (x, y) there only two types of valid movements: (x, x + y) and (x + y, y).

C Function Specifications:
Use the function name and the argument as:
int isReachable(x1,y1,x2,y2):
This recursive function should return 1 if the given source point will reach the destination point. Else return 0.
 

Python Function Specifications:
Use the function name and the argument as:
def isReachable(x1,y1,x2,y2):
This recursive function should return 1 if the given source point will reach the destination point. Else return 0.

Input Format:
First line of the input contains the source point (x1).
Second line of the input contains the source point (y1).
Third line of the input contains the source point (x2).
Fourth line of the input contains the source point (y2).
Output Format:
Output "True" (without quotes) if the given source point will reach the destination point. Print "False" (without quotes) otherwise.
Refer sample input and output for formatting specifications.

Sample Input 1:
2

10
26

12

Sample Output 1:
True

Sample Input 2:
20

10
6

12

Sample Output 2:
False
*/
#include<stdio.h>
int isReachable(int x1,int y1,int x2,int y2)
{
    if(x1>x2 || y1>y2)
    {
        return 0;
    }
    if(x1==x2 && y1==y2)
    {
        return 1;
    }
    return isReachable(x1,x1+y1,x2,y2) || isReachable(x1+y1,y1,x2,y2);

}
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("%s",isReachable(x1,y1,x2,y2)?"True":"False");
    return 0;
}