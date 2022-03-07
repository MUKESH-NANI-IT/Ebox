// Caption Contest
/*
Exeter Caption Contest is a competition open to all writers worldwide. The entrants will have one day to compose and submit a caption that will be based on the theme posted on the competition page.
 
Robin, a creative writer had penned two captions for the contest but he unknowingly misplaced them. After searching long, he managed to locate his captions, but some letters in them have become unreadable. The captions were in two very old sheets of paper, each of which originally contained a string of lowercase English letters. The strings on both the sheets have equal lengths.
 
Robin would like to estimate the difference between these strings. Let's assume that the first string is named S1, and the second S2. The unreadable symbols are specified with the question mark symbol '?'. The difference between the strings equals to the number of positions i, such that S1i is not equal to S2i, where S1i and S2i denote the symbol at the i th position in S1 and S2, respectively.
 
Robin would like to know the minimal and the maximal difference between the two strings, if he changes all unreadable symbols to lowercase English letters. Robin is not an expertise in programming and so he needs your help solving this problem!

Input Format:
The first line of the input contains a string S1.
The second line of the input contains a string S2.
Both strings consist of lowercase English letters and question marks in places where the symbols are unreadable.

Output Format:
Output the minimal and the maximal difference between two given strings separated with a single space.
Refer sample input and output for formatting specifications.

Sample Input1:
a?c
??b
Sample Output1:
1 3

Sample Input2:
???a
???a
Sample Output2:
0 3
*/
#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
scanf("%s",s1);
scanf("%s",s2);
int i;
int mincount=0,maxcount=0;
if(strlen(s1)!=strlen(s2))
{
return 0;
}
else
{
for(i=0;i<strlen(s1);i++)
{
if(s1[i]=='?' || s2[i]=='?')
{
maxcount=maxcount+1;
}
else if(s1[i]!=s2[i])
{
mincount=mincount+1;
maxcount=maxcount+1;
}
}
printf("%d %d\n",mincount,maxcount);
}
return 0;
}
