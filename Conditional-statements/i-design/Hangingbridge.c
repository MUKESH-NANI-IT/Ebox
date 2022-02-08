//   Hanging Bridge
/*
At the annual "KrackerJack Karnival", there was a newest attraction ever in the City, the "Hanging Bridge". Visitors will be able to walk 200ft on the bridge, hanging around 50ft above the ground, and enjoy a wide-angle view of the breathtaking greenery.
The Hanging Bridge was inaugurated successfully in co-ordination with the Event Manager Rahul. There is a limit on the maximum number of people on the bridge and Rahul has to now ensure the count of people on the bridge currently should not exceed the limit. He then approximately estimated that C adults and D kids who came to the show, were on the hanging bridge. He also noticed that there are L legs of the people touching the bridge.
Rahul knows that kids love to ride on the adults and they might ride on the adults, and their legs won't touch the ground and hence he would miss counting their legs. Also Rahul knew that the adults would be strong enough to ride at max two kids on their back.
Rahul is now wondering whether he counted the legs properly or not. Specifically, he is wondering is there some possibility of his counting being correct. Please help Rahul in finding it.

Input Format:
The only line of input contains three space separated integers C, D, L denoting number of the adults, number of the kids and number of legs of people counted by Rahul, respectively.

Output Format:
Output a single line containing a string "yes" or "no" (both without quotes) according to the situation.
Refer sample input and output for formatting specifications.

Sample Input 1:
1 1 4

Sample Output 1:
yes
*/
/*                                                              CODE                                                        */
#include <stdio.h>
int main()
{
    int c, d, L, tot;
    scanf("%d %d %d", &c, &d, &L);
    tot = d - (c * 2);
    if (tot <= 0)
    {
        if (L >= (c * 2) && L <= ((c * 2) + (d * 2)) && L % 2 == 0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else if (tot > 0)
    {
        if (L >= (tot + c) * 2 && L <= ((c * 2) + (c * 2)) && L % 2 == 0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}
