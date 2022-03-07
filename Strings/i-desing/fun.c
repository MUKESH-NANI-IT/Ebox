//  Fun with Words
/*
"Juniors Network" Cartoon Channel is the favorite channel of all the kids in the city. As it is vacation time, the channel had introduced several new segments to engage the kids in a more creative manner. "Fun with Words" is one such activity involving English alphabets, where school kids were invited to participate.
 
Today on the show, the show host Santra briefed the kids about extinct languages and modern languages in the World. Extinct languages are languages that are no longer in use. Such languages were widely used before and no one could have ever imagined that they will become extinct at some point. On the happy side of things, a language may be extinct, but some of its words may continue to be used in other languages.
 
Santra now has acquired a dictionary of N words of an extinct language.  She also knows K phrases used in modern languages. For each of the words of the forgotten language, the kids are to determine whether the word is still in use in any of these K modern phrases or not. Help them with the activity by writing a block of code.
 
Input Format:
First line of the input contains two space separated positive integers N and K.
The second line of the input contains N strings denoting a dictionary of the extinct language.
Each of the next K lines of the input starts with one positive integer L denoting the number of words in the corresponding phrase in modern languages. The integer is followed by L strings (not necessarily distinct) denoting the phrase.
 
Output Format:
Output a single line containing N tokens (space-separated): if the ith word of the dictionary exists in at least one phrase in modern languages, then you should output "Yes"(without quotes) as the ith token, otherwise "No"(without quotes).
Refer sample input and output for formatting specifications.

Sample Input 1:
3 2
piygu ezyfo rzotm
1 piygu
6 tefwz tefwz piygu ezyfo tefwz piygu
Sample Output 1:
Yes Yes No

Sample Input 2:
2 2
werft qwefr
2 fgrhr hrhrh
3 werft qwerfr rtygre
Sample Output 2:
Yes No

 */
#include<stdio.h>
#include<string.h>
int main(void)
{
int n,l,i,j,k,flag;
{

scanf("%d%d",&n,&k);
char a[100][6];
int y=0;
for(i=0;i<n;i++)
{
scanf("%s",a[y++]);
}
int sum=0,z=0;
char b[10000][6];
for(i=0;i<k;i++)
{
scanf("%d",&l);
sum+=1;
for(j=0;j<l;j++)
{
scanf("%s",b[z++]);
}
}
for(i=0;i<n; i++)
{ 
    for(j=0; j<sum; j++)
    { 
        if(strcmp(a[i],b[j])==0)
        { 
            flag=1;
            break;
        } else
        {
         
          flag=0;
        }
    } 
     if (flag)
      {
       printf("Yes ");
      } 
      else
       {
        printf("No ");
       }
       }
printf("\n");
}
return 0;
}