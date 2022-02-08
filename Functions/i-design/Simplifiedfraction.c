 //    Simplified Fraction
 /*
St. Patrick Convent organizes a project exhibition "Innovative Minds" every year with an objective to provide the platform and unleash the potential of the students by showcasing their innovative projects. Pasha is a smart high school student and was eager to participate in the fair for the first time.
 
After a lot of ground works, she decided her project and set out to design the same. Her project requirement was to design an advanced calculator that has a fraction feature that will simplify fractions. The project will accept a non-negative integer as a numerator and a positive integer as a denominator and outputs the fraction in simplest form. That is, the fraction cannot be reduced any further, and the numerator will be less than the denominator.
 
Help Pasha to program her advanced calculator and succeed in her first ever project presentation. You can assume that all input numerators and denominators will produce valid fractions.
 
C Function Specifications:
Use the function name and the argument as:
void printValue(numerator,denominator):
The function must display the fraction in simplest form.

Python Function Specifications:
Use the function name and the argument as:
def printValue(numerator,denominator):
The function must display the fraction in simplest form.

Input Format:
First line of the input is a non-negative integer which is the numerator in the fraction.
Second line of the input is a positive integer which is the denominator in the fraction.

Output Format:
Output the simplified form of the fraction in a single line.
Refer sample input and output for formatting specifications.
 
Sample Input 1:
28
7
Sample Output 1:
4

Sample Input 2:
13
5
Sample Output 2:
2 3/5
*/
 /*                                                              CODE                                                        */
#include<stdio.h>
void printValue(int numerator ,int denominator)
{
    if(numerator%denominator==0)
    {
        printf("%d",numerator/denominator);
        return ;
    }
    int i=numerator;
    while (i>=2)
    {
        if(numerator%i==0 && denominator%i==0)
        {
            numerator=numerator/i;
            denominator=denominator/i;
        }
        i--;
    }
    if(numerator<denominator)
    {
     printf("%d/%d",numerator,denominator);
    }
    else
    {
        printf("%d %d/%d",numerator/denominator,numerator%denominator,denominator);
    }
}
int main()

{
    int num,den;
    scanf("%d %d",&num,&den);
    printValue(num,den);
    return 0;
}