/*
                                    Mahirl's Evening Party



Mahirl has started an Event Management Company named “Amphi Events and Decors”. The focus of this venture is to provide event management solutions for both personal functions and private parties, Organize and manage corporate events that leave a lasting impression and project your perfection.
In order to get herself equipped with the event management skills, she is organizing an Evening Party everyday in the first month.
She booked a popular hall named “Amphi Mahal” that could accommodate around 1000 people.
She expected more crowd to this party during week ends and so she conducted the week end parties in the Codissia Open Ground.
After a month, she has to submit a report to the Board of Directors on how succesful these parties were.
A week day party is considered to be succesful if the number of people attending this party is between 700 and 1000, both inclusive. [ The hall is neither undercrowded or overcrowded].
A weekend party is considered to be successful if the number of people attending the party is at least 1500.
Can you please help Mahirl in classifying whether the given parties were successful or not?
Given the day details and the number of people who have attended the party on that day, write a program to classify the party as successful or not.
Input Format:
The first line of the input consists of a string that corresponds to the day details. The 7 days are denoted as “SUN”, “MON”, “TUE”, “WED”, “THU”, “FRI” and “SAT”.
Friday, Saturday and Sunday are considered to be week ends.
The second line of the input consists of an integer that corresponds to the number of people who have attended the party.
Output Format:
Output consists of a string --- “Successful” or “Unsuccessful” or “Invalid Input”.
If the input string is not in one of the valid days or the if the input integer is negative, print Invalid Input.
Refer sample input and output for formatting specifications.
Sample Input 1:
MON
800
Sample Output 1:
Successful
Sample Input 2:
FRI
1200
Sample Output 2:
Unsuccessful
Sample Input 3:
MAN
800
Sample Output 3:
Invalid Input
*/

/*                                                              CODE                                                        */
#include <stdio.h>
#include <string.h>
int main()
{
    char day[15];
    int no_of_people;
    scanf("%s", day);
    scanf("%d", &no_of_people);
    if (no_of_people < 0)
    {
        printf("Invalid Input");
    }
    else if (strcmp(day, "MON") == 0 || strcmp(day, "TUE") == 0 || strcmp(day, "WED") == 0 || strcmp(day, "THU") == 0)
    {

        if (no_of_people >= 700 && no_of_people <= 1000)
        {
            printf("Successful");
        }
        else
        {
            printf("Unsuccessful");
        }
    }
    else if (strcmp(day, "FRI") == 0 || strcmp(day, "SAT") == 0 || strcmp(day, "SUN") == 0)
    {
        if (no_of_people >= 1500)
        {
            printf("Successful");
        }
        else
        {
            printf("Unsuccessful");
        }
    }
    else
    {
        printf("Inavalid Input");
    }
    return 0;
}
