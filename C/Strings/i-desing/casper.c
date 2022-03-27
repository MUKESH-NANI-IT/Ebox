
// Casper at the Carnival
/*
The Circoloco Children Carnival is the City’s largest and successful event dedicated to children and families. Casper is a smart little boy who loves eating cookies and drinking fresh juices. He visits the carnival with his parents and is going to spend N minutes at the event ground. Each minute he either eats a cookie or drinks fresh juice. Cookies are very sweet and thus Casper’s parents have instructed him to drink fresh juice in the next minute, after eating a cookie.

You are given whether he ate a cookie or drank fresh juice in each of the N minutes. Your task is to check if Casper followed his parents' instructions. That is, you need to verify whether after each eaten cookie he drinks fresh juice in the next minute.

Input Format:
The first line of the input contains an integer N denoting the number of minutes.
The second line of the input contains N space-separated strings S1, S2, ...,SN. The string Si is either "cookie" (if Casper eats a cookie in the i-th minute) or "juice" (otherwise).
 
Output Format:
Output a single line containing the answer — "Yes"(without quotes) if Casper followed his parents' instructions, and "No"(without quotes) otherwise, both without the quotes.
Refer sample input and output for formatting specifications.

Sample Input1:
7
cookie juice juice cookie juice cookie juice
Sample Output1:
Yes

Sample Input 2:
5
cookie cookie juice juice juice
Sample Output 2:
No
*/
#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
char str[n][7];
int flag=0;
for(int i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(int i=0;i<n;i++)
{
if(strcmp(str[i],"cookie")==0 && strcmp(str[i+1],"juice")!=0)
{
flag=1;
break;
}
}
if(flag==0)
printf("Yes");
else
printf("No");
return 0;
}