/*
Fortune Telling
Marina loves Sasha. But she keeps wondering whether Sasha loves her. Of course, the best way to know it is fortune-telling. There are many ways of telling fortune, but Marina has picked the easiest one. She takes in her hand one or several camomiles and tears off the petals one by one. After each petal, she pronounces alternatively "Loves" and "Doesn't love", at that Marina always starts with "Loves". There are n camomiles growing in the field, possessing the numbers of petals equal to a1, a2, ... an. Marina wants to pick a bouquet with the maximal possible total number of petals so that the result would still be "Loves".

Write a program to find the maximal number of petals possible in the bouquet.


Input and Output Format:
The first input contains an integer n (1 ≤ n ≤ 20), which corresponds to the number of flowers growing in the field.
The next 'n' lines contains n integers ai (1 ≤ ai ≤ 20) which represent the number of petals on a given i-th camomile.

The output displays a single number which is the maximal number of petals in the bouquet, the fortune telling on which would result in "Loves".
If there are no such bouquet, print "0"(without quotes) instead. The bouquet may consist of a single flower.
[All text in bold represents the input, and the remaining represents the output.]

Sample Input and Output 1:
Enter the number of flowers
1
Enter the number of petals in each flower
1
The maximum number of petals in the bouquet = 1

Sample Input and Output 2:
Enter the number of flowers
1
Enter the number of petals in each flower
2
The maximum number of petals in the bouquet = 0

Sample Input and Output 3:
Enter the number of flowers
3
Enter the number of petals in each flower
5
6
7
The maximum number of petals in the bouquet = 13
*/
#include <stdio.h>
int main()
{
    int count = 0;
    printf("Enter the number of flowers\n");
    scanf("%d", &count);
    printf("Enter the number of petals in each flower\n");
    int evensum = 0, oddsum = 0, minodd = 21;
    for (int i = 0; i < count; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0)
            evensum += temp;
        else
        {
            oddsum += temp;
            if (minodd > temp)
                minodd = temp;
        }
    }
    if (oddsum == 0)
    {
        printf("The maximum number of petals in the bouquet=0");
        return 0;
    }
    if (oddsum % 2 == 0)
        oddsum -= minodd;
    printf("The maximum number of petals in the bouquet =%d", oddsum + evensum);
    return 0;
}