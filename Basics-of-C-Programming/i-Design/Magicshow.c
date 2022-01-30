/*WonderWorks Magic Show
 
The Magic Castle, the home of the Academy of Magical Arts at California has organized the great ‘WonderWorks Magic Show’. 3 renowned magicians were invited to mystify and thrill the crowd with their world’s spectacular magic tricks. At the end of each of the 3 magicians’ shows, the audience were requested to give their feedback in a scale of 1 to 10. Number of people who watched each show and the average feedback rating of each show is known. Write a program to find the average feedback rating of the WonderWorks Magic show.
 */


#include<stdio.h>
int main()
{
int p1,p2,p3;
float a1,a2,a3;
int total_people;
float total_avg;
float overall_avg;
float pa1,pa2,pa3;
printf("Enter the number of people who watched show 1\n");
scanf("%d",&p1);
printf("Enter the average of the show 1\n");
scanf("%f",&a1);
printf("Enter the number of people who watched show 2\n");
scanf("%d",&p2);
printf("Enter the average of the show 2\n");
scanf("%f",&a2);
printf("Enter the number of people who watched show 3\n");
scanf("%d",&p3);
printf("Enter the average of the show 3\n");
scanf("%f",&a3);

pa1=p1*a1;
pa2=p2*a2;
pa3=p3*a3;

total_avg=pa1+pa2+pa3;
total_people=p1+p2+p3;
overall_avg=total_avg/total_people;
printf("The overall average  rating for the show is %.2f",overall_avg);
return 0;
}