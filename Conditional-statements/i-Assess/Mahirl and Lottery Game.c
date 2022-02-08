/*
                                         Mahirl and Lottery Game
The weekend events conducted by Mahirl's Event Management Venture “Amphi Events and Decors” have become very popular in the city. Lot of kids have also started attending these events. To keep the kids entertained, Mahirl's team introduced lots of fun games. One of the games popular among the kids is the “Lottery Game”
This game is a family game. The kids need to take part in this game along with their parents.
There is a set of cards kept upside down on the table. The cards will have one of the 3 numbers --- 0 or 1 or 2 printed on it. The kid and the parents need to take 1 card from the table.
If all 3 of them have picked a card with number 2 in it, they will get 20 points.
Otherwise if the cards picked by all three of them have the same number, they will get 10 points.
If both the parents have picked the same card and the child has picked a different card, they will get 5 points.
If any two of them have picked the same card and the other has picked a different card, they will get 2 points.
In all other cases , they get 0 points.
The points scored in this lottery game will be converted to PayBack points which can be used a week later.
Can you help Mahirl in designing a system to calculate the total score?
Input Format:
Input consists of 3 integers.
The 1st integer corresponds to the number in the card picked by the father.
The 2nd integer corresponds to the number in the card picked by the mother.
The 3rd integer corresponds to the number in the card picked by the child.
The valid inputs are only 0, 1 and 2.
Output Format:
Output consists of an integer that corresponds to the points scored by the family.
Print “Invalid Input” if any of the inputs is invalid.
Refer sample input and output for formatting specifications.
Sample Input 1:
2
1
1
Sample Output 1:
2
Sample Input 2:
2
-1
1
Sample Output 2:
Invalid Input
*/
/*                                                              CODE                                                        */
#include <stdio.h>
int main()
{
    int f, m, c;
    scanf("%d", &f);
    scanf("%d", &m);
    scanf("%d", &c);
    if (f < 0 || f > 2 || m < 0 || m > 2 || c < 0 || c > 2)
    {
        printf("Invalid Input");
    }
    else if (f == 2 && m == 2 && c == 2)
    {
        printf("20");
    }
    else if (f == m && m == c)
    {
        printf("10");
    }

    else if (f == m)
    {
        printf("5");
    }
    else if (f == c || m == c)
    {
        printf("2");
    }

    else
    {
        printf("0");
    }

    return 0;
}
