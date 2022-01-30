/*                                    Insomnia cure
«One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.
However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.
Write a program to find how many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

Input and Output Format:
Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).
The output displays the number of damaged dragons.
Sample Input 1:
1
2
3
4
12

Sample Output 1:
12

Sample Input 2:
2
3
4
5
24

Sample Output 2:
17
*/
// CODE
#include <stdio.h>
int main()
{
    int k, i, l, m, n, d, c = 0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    for (i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        // here we check the remainder of each dargon wrt i
        {
            c++;
        }
    }
    printf("%d", c);
    return (0);
}