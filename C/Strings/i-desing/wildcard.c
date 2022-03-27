
// Wildcard Matching
/*
Sunil is a little scientist. Sunil has planned to design a wildcard pattern matcher to exhibit at the "Young Inventors", a tech talent show organized at his school.
Sunil wanted to design the wildcard pattern matcher supporting the wildcard character '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'.
Sunil wants your help in designing the device, to know whether the strings X and Y can be matched or not. Write a program to check whether the given strings can be matched or not.
 
Input Format:
First line of the input contains the string ‘X’.
Second line of the input contains the string ‘Y’.

Output Format:
Output a single line with the word "Yes"(without quotes) if the strings can be matched, otherwise output "No"(without quotes).
Refer sample input and output for formatting specifications.

Sample Input1:
s?or?
sco??
Sample Output1:
Yes

Sample Input2:
stor?
sco??
Sample Output2:
No
*/

#include<stdio.h>
#include<string.h>
int main()
{
int i;
char s[10];
char s1[10];
scanf("%s %s",s,s1);
int x=strlen(s);
int c=0,c1=0;
for(i=0;i<x;i++)
{
if(s[i]!='?' && s1[i]!='?')
{
c++;
if(s[i]==s1[i])
{
c1++;
}
}
}
if(c==c1)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
