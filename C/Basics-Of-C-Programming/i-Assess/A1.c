/*
                                                           Calculating Gain Percentage

Vikram buys an old scooter for Rs. A and spends Rs. B on its repairs. If he sells the scooter for Rs. C , what is his gain %?


Write a program to compute the gain %.



Input Format:

The first input is an integer which corresponds to A. The second input is an integer which corresponds to B. The third input is a float which corresponds to gain %.

Output Format:

Refer sample input and output for formatting specifications.

The float values are displayed correct to 2 decimal places.

Sample Input and Output:

[All text in bold corresponds to input and the rest corresponds to output]


Price of old scooter:

4700

Repair amount:

800

Selling price:

5800

Gain percentage is 5.45*/

/*                                                              CODE                                                        */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Price of old scooter:\n");
    scanf("%d", &a);
    printf("Repair amount:\n");
    scanf("%d", &b);
    printf("Selling price:");
    scanf("%d", &c);
    float d;
    d = (((float)c - (float)a - (float)b) / ((float)a + (float)b)) * 100;
    printf("Gain percentage is %.2f", d);

    return 0;
}
