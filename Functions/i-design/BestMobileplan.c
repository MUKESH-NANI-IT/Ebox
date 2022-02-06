//    Best Mobile Plan
 /*
St. Patrick Convent organizes a project exhibition "Innovative Minds" every year with an objective to provide the platform and unleash the potential of the students by showcasing their innovative projects.
Albert is a science expert and is a topper at his high school. He became interested about the project exhibition and enrolled his name for the same.
 
Albert’s Dad has a cell phone but often seemed to worry about the price plans for his phone that best fits for his usage pattern and monthly expenses. There are two options, each plan has different costs for daytime minutes, evening minutes and weekend minutes.
 

Plan	Costs
daytime	evening	night
A	100 free minutes then
25 paise per minute	15 paise per minute	20 paise per minute
B	250 free minutes then
45 paise per minute	35 paise per minute	25 paise per minute
 
Having this as a spark for his project, Albert decided to design a handy application that will input the number of each type of minutes and output the cheapest plan for this usage pattern,using the format shown below.In the case that the two plans are the same price, output both plans.
 
He needs your help to evaluate his project and suggest corrections. You have to now write a program using functions to help Albert in designing a defect free application to present at the Project Fair.
 
C and JAVA Function Specifications:
Use the function name, return type and the argument type as:
void printPlanDetails(int,int,int)
The function must print the cheapest plan for this usage pattern.

Python Function Specifications:
Use the function name, return type and the argument type as:
def printPlanDetails(int,int,int)
The function must print the cheapest plan for this usage pattern.

Input Format:
First line of the input is an integer that gives the usage during the daytime in minutes.
Second line of the input is an integer that gives usage during the evening in minutes.
Third line of the input is an integer that gives usage during the night in minutes.

Output Format:
Output should print the cheapest plan for this usage pattern. In the case that the two plans are the same price, output both plans. Print the cost value with two decimal places.
Refer sample input and output for formatting specifications.

Sample Input 1:
251
10
60
Sample Output 1:
Plan A costs 51.25
Plan B costs 18.95
Plan B is cheapest

Sample Input 2:
162
61
66
Sample Output 2:
Plan A costs 37.85
Plan B costs 37.85
Plan A and B are the same price

*/
#include<stdio.h>
void printPlanDetails(int day,int eve,int nyt)
{
double Aday,Aeve,Anyt,TA,TB;
Aday=(day-100)*25;
Aeve=15*eve;
Anyt=20*nyt;
double Bday,Beve,Bnyt;
Bday=(day-250)*45;
Beve=35*eve;
Bnyt=25*nyt;
if(Aday<10)
{
Aday=0;
}
if(Bday<0)
{
Bday=0;
}
TA=(Aday+Aeve+Anyt)/100;
TB=(Bday+Beve+Bnyt)/100;
printf("Plan A costs %.2f\n",TA);
printf("Plan B costs %.2f\n",TB);
if(TA>TB)
{
printf("Plan B is cheapest\n");
}
else if(TB>TA)
{
printf("Plan A is cheapest");
}
else
{
printf("Plan A and B are the same price\n");
}
}
int main()
{
int day,eve,nyt;
scanf("%d",&day);
scanf("%d",&eve);
scanf("%d",&nyt);
printPlanDetails(day,eve,nyt);
return 0;
}