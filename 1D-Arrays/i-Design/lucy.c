// Lucy at the Film Festival
 /*
LucarnosFilm Festival is an annual film festival and is also known for being a prestigious platform for art house films. This time at the Lucarnos Film festival there are N movies screened, each of different genre ranging from drama movies to comedy ones and teen movies to horror ones. Lucy is a huge fan of movies and visited the film festival, but she's not sure which movie she should watch.
Each movie can be characterized by two integers Li and Ri, denoting the length and the rating of the corresponding movie. Lucy wants to watch exactly one movie with the maximal value of Li × Ri. If there are several such movies, she would pick a one with the maximal Ri among them. If there is still a tie, she would pick the one with the minimal index among them.
 
Write a program to help Lucy pick a movie to watch at the film festival.
 
Input Format:
The first line of the input description contains an integer n. Assume that the maximum value for n as 50.
The second line of the input description contains n integers L1, L2, ...,Ln.
The following line contains n integers R1, R2, ...,Rn.

Output Format:
Output a single integer i denoting the index of the movie that Lucy should watch in the film festival. Note that you follow 1-based indexing.
Refer sample input and output for formatting specifications.

Sample Input 1:
2
1 2
2 1

Sample Output 1:
1

Sample Input 2:
4
2 1 4 1
2 4 1 4

Sample Output 2:
2
*/
#include<stdio.h>
int main()
{
int num=0;
scanf("%d",&num);
int l[num], r[num], prod[num];
int i;
for(i=0; i<num; i++) 
scanf("%d",&l[i]);
for(i=0; i<num; i++)
scanf("%d",&r[i]);
for(i=0; i<num; i++)
prod[i]=l[i]*r[i];
int res[3];
res [0]=0;
res [1]=0;
res [2]=0; 
for(i=0;i<num; i++)
{
   if(res[0] <prod[i])
  { 
    res [0]=prod[i]; 
    res[1]=r[i];
    res[2]=i;
  }
else if(res[0]==prod[i]) 
    {
     if(r[i]>res[1])
     {
       res[1]=r[i];
       res[2]=i;
     }
    }
}
printf("%d",res[2]+1);
return 0;
}
