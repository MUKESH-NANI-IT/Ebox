/*                                                             Lucky Cards

The Hatfield Game Fair is the premier event of its kind for adults interested in some intellectual and cognitive brain games. Exciting games were organized for kids between age group of 8 and 10. One such game was the "Lucky Cards", a simple two-player game, played with a deck of cards. The cards in the deck have these possible names: two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace. The cards labeled jack, queen, king, ace are collectively known as high cards.
The numerical equivalent of the high cards is as given below:
Jack – 11
Queen – 12
King – 13
Ace - 1
Please note here, though Ace has a numerical equivalent value as 1, it is always considered as the top rated card. So it is also included in the list of high cards.

The game organizer selects N cards and places it in the deck faced-down on the table. Player A turns over the top card and places it on a pile; then player B turns over the top card and places it on the same pile. A and B alternate turns until the N cards are exhausted. The game is scored as follows:
if a player turns over an ace that is 1, with at least 4 cards remain to be turned over, and none of the next 4 cards is a high card, that player scores 4 points
if a player turns over a king that is 13, with at least 3 cards remain to be turned over, and none of the next 3 cards is a high card, that player scores 3 points
if a player turns over a queen that is 12, with at least 2 cards remain to be turned over, and none of the next 2 cards is a high card, that player scores 2 points
if a player turns over a jack that is 11, with at least 1 card remains to be turned over, and the next card is not a high card, that player scores 1 point
Write a program to calculate the scores of the two players.

Input Format:
The first line of the input contain an integer N, which corresponds to the number of cards in the deck.
Each of the following N lines will contain an integer that corresponds to the numerical value of the cards that the players turn over. The first line denotes the first card to be turned over; the next line the next card; and so on.

Output Format:
Print the individual scores of the players whenever a player scores in separate new lines.
Print the total score for each player in the last two lines of the output at the end of the game.
Refer sample input and output for formatting specifications.

Sample Input 1:
15
3
2
1
5
6
4
8
11
2
3
2
13
6
10
6

Sample Output 1:
Player A scores 4 point(s)
Player B scores 1 point(s)
Player B scores 3 point(s)
Player A: 4 point(s)
Player B: 4 point(s)

Sample Input 2:
15
3
2
1
5
6
12
8
11
12
3
1
13
6
11
6

Sample Output 2:
Player B scores 1 point(s)
Player A: 0 point(s)
Player B: 1 point(s)

*/
/*                                                              CODE                                                        */
#include <stdio.h>

int main()
{
    int stackSize, card, playerScores[] = {0, 0}, playerIndex = 0;
    char player = 'A';
    scanf("%d", &stackSize);
    int stack[stackSize];

    // reads input
    for (int i = 0; i < stackSize; i++)
    {
        scanf("%d", &stack[i]);
    }

    // for all cards in stack
    for (card = 0; card < stackSize; card++)
    {
        int scorePoint = 0;

        // this switch statement determines the score and the amount of cards to be checked next
        switch (stack[card])
        {
        case 1:
            scorePoint = 4;
            break;

        case 13:
            scorePoint = 3;
            break;

        case 12:
            scorePoint = 2;
            break;

        case 11:
            scorePoint = 1;
            break;

        default:
            scorePoint = 0;
            break;
        }

        // if the current card is a high card
        if (scorePoint != 0)
        {

            // if there exists atleast 4/3/2/1 cards in the stack
            if ((stackSize - 1) - card >= scorePoint)
            {
                // flag high
                int high = 0;

                // for next 4/3/2/1 cards
                for (int j = (card + 1); j <= (card + scorePoint); j++)
                {

                    // if a high card found, flag high is incremented
                    if (stack[j] == 1 || stack[j] == 13 || stack[j] == 12 || stack[j] == 11)
                    {
                        high++;
                        break;
                    }
                }
                // if no high card is found
                if (high == 0)
                {
                    printf("\nPlayer %c scores %d point(s)", player, scorePoint);
                    playerScores[playerIndex] += scorePoint;
                }
            }
        }

        // changing player
        if (player == 'A')
        {
            player = 'B';
            playerIndex = 1;
        }
        else
        {
            player = 'A';
            playerIndex = 0;
        }
    }
    printf("\nPlayer A: %d point(s)", playerScores[0]);
    printf("\nPlayer B: %d point(s)", playerScores[1]);
    return 0;
}