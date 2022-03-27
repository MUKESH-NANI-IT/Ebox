
// Nella's Birthday and Colorfull Balloons
/*
Nella is an eight-year-old princess who will inherit the kingdom of Castlehaven. It is her birthday today and her Dad, the King of Castlehaven has arranged for a grand party. Nella loves colorful balloons and so her Dad planned to decorate the entire palace with balloons of the colors that Nella loved. So he asked her about her color preferences. The sophisticated princess, that is Nella, likes only two colors — amber and brass. Her Dad bought n balloons, each of which was either amber or brass in color.
 
You are provided this information in a string s consisting of characters 'a' and 'b' only, where 'a' denotes that the balloon is amber, where 'b' denotes it being brass colored. When Nella saw the balloons, she was furious with anger as she wanted all the balloons of the same color. In her rage, she painted some of the balloons with the opposite color (i.e., she painted some amber ones brass and vice versa) to make all balloons appear to be the same color.

It took her a lot of time to do this, but you can probably show her the right way of doing so, thereby teaching her a lesson to remain calm in difficult situations, by finding out the minimum number of balloons needed to be painted in order to make all of them the same color.

Input Format:
The first and only line of input contains a string s.

Output Format:
Output a single line containing an integer — the minimum number of flips required.
Refer sample input and output for formatting specifications.
 
Sample Input1:
ab
Sample Output1:
1

Sample Input2:
baaba
Sample Output2:
2
*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
scanf("%s",s);
int i,c1=0,c2=0;
for(i=0;i<strlen(s);i++)
{
if(s[i]=='a')
{
c1++;
}
else if(s[i]=='b')
{
c2++;
}
}
if(c1>=c2)
{
printf("%d\n",c2);
}
else
{
printf("%d\n",c1);
}
return 0;
}