
// Little Authors
/*
"Little Authors" Slogan Writing Competition was organized for School students at Orchids Senior School. Any student who is creative and effective in communicating ideas in short, yet powerful about any instant topic can participate in the competition. The important guideline for the contest is that the Slogan should contain a string where the number of occurrences of some character in it is equal to the sum of the numbers of occurrences of other characters in the string. 
 
Write a program to help the event organizers to determine whether the submitted Slogans adhere to the given condition.
 
Input Format:
First and only line of input contains one string S consisting of lowercase letters.
 
Output Format:
Output a single line containing "Yes"(without quotes) if the string satisfies the condition given above or "No"(without quotes) otherwise.
Refer sample input and output for formatting specifications.

Sample Input1:
acab
Sample Output1:
Yes

Sample Input2:
abc
Sample Output2:
No
*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,c1,c2;
char s[50];
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
n=0;
c1=0;
c2=0;
for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
{
c1++;
}
else
{
c2++;
}
}
if(c1==c2)
{
n=1;
break;
}
}
if(n==1)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
