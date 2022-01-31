//Minimum and Maximum
 /*
The ExConFair is the region's largest trade fair on Construction Equipments & Technology. The Event organizers hired college students as volunteers to work at the fair as the event is targeted to be attended by approx. 30 million visitors.
 
At the Office in the fair, there are two guards who count how many times a volunteer enters into the fair ground. Though the duty of a guard is 24 hour in a day, but sometimes they fall asleep during their duty and could not track the entry of volunteers in the fair ground. But one better thing is that they never fall asleep at the same time. At least one of them remains awake and counts who enters into the office. Now the Event Head wants to calculate how many times a volunteer has entered into the fair ground. He asked to the guard and they give him two integers A and B, count of first guard and second guard respectively.
Help the Event Head to count the minimum and maximum number of times a volunteer could have entered into the fair ground.
 
Input Format:
First line of the input consists of two integers that correspond respectively to A and B.

Output Format:
Output a single line containing two space separated integers, the minimum and maximum number of times a volunteer could have entered into the fair ground.
Refer sample input and output for formatting specifications.

Sample Input 1:
19 17

Sample Output 1:
19 36
*/

#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=a+b;
    if(a>=b)
    {
        printf("%d %d",a,max);
    }
    if(b>a)
    {
        printf("%d %d",b,max);
    }
}