/*The Event Organizing Company "Buzzcraft" wanted to procure seven segment displays to display any numeric information display boards, scrolling ad banners, etc., to place it in their Events. The Company contracted out their order to MDC team at Orange labs who designs embedded sensing nodes and provides connectivity to tie them to the internet of things.

They are working on building seven segment displays. But the Company wanted to know how many seven segment displays will they need to represent an Integer x. They use one seven segment display to represent one digit of an Integer. For example: Integer "100" needs "3" seven segment boards to be represented.

Help them find out how many displays are needed?
 
Input Format:
First and only line consists of one positive integer that needs to be represented using seven segment displays.

Output Format:
Output a single line containing the number of digits of that integer.
Refer sample input and output for formatting specifications.

Sample Input 1:
1

Sample Output 1:
1

Sample Input 2:
1000

Sample Output 2:
4
*/
/*                                                              CODE                                                        */
#include<stdio.h>
int main(){
    int sd;
    int c=0;
    scanf("%d",&sd);
    while (sd>=10)
    {
        sd=sd/10;
        c++;
    }
    c++;
    printf("%d",c);
}
