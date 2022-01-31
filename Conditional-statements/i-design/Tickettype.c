 /*Ticket types
 
The Magic Castle, the home of the Academy of Magical Arts at California has organized the great 'WonderWorks Magic Show'. Renowned magicians were invited to mystify and thrill the crowd with their world’s spectacular magic tricks. The Ticket booking for the show started 2 days prior and there were different types of tickets offered with different fare. The show organizers wanted to place a scanning machine at the entrance of the venue for scrutiny. The machine will take the input of a character denoting the various ticket types and displays the equivalent ticket type of the given character.
 
There are 5 types of tickets, each of which is denoted by a character (both upper case and lower case). Please find the equivalent strings for the characters.
E or e - Early Bird Ticket
D or d - Discount Ticket
V or v - VIP Ticket
S or s - Standard Ticket
C or c - Child Ticket
Write a piece of code for the scanning machine that will take the input of a character and print the equivalent string as given.

Note:
Refer to problem specifications.

Input Format:
The first line of the input is one of the character that denotes one of ticket types.

Output Format:
Output should display the equivalent ticket type of the character.
Refer sample input and output for formatting specifications.

Sample Input 1:
e

Sample Output 1:
Early Bird Ticket

Sample Input 2:
S

Sample Output 2:
Standard Ticket
*/



#include<stdio.h>
int main()
{
  char s;
  scanf("%c",&s);
  switch(s)
    {
       case 'E':
          printf("Early Bird Ticket");
          break;
       case 'e':
          printf("Early Bird Ticket");
          break;
       case 'D':
          printf("Discount Ticket");
          break; 
       case 'd':
          printf("Discount Ticket");
          break;
       case 'V':
          printf("VIP Ticket");
          break;
        case 'v':
          printf("VIP Ticket");
          break;
       case 'S':
          printf("Standard Ticket");
          break;
       case 's':
          printf("Standard Ticket");
          break;
       case 'C':
          printf("Child Ticket");
          break;
       case 'c':
          printf("Child Ticket");
          break;
          default:
          printf("Invalid Input");
    }
}