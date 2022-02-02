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