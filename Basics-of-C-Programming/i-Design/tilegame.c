/*         Tile Game

In connection to the National Mathematics Day celebration, the Regional Mathematical Scholars Society had arranged for a Mathematics Challenge Event where school kids participated in large number. Many interesting math games were conducted, one such game that attracted most kids was the tile game where the kids were given 'n'
square tiles of the same size and were asked to form the largest possible square using those tiles.

Help the kids by writing a program to find the area of the largest possible square that can be formed, given the side of a square tile (in cms) and the number of square tiles availab
*/

/*                                                              CODE                                                        */

#include <stdio.h>
int main()
{
    int s, n, a;
    int i = 1, m;
    printf("Enter the side in cm of a square tile\n");
    scanf("%d", &s);
    printf("Enter the number of square tiles available\n");
    scanf("%d", &n);
    while (i * i <= n)
    {
        m = i * i;
        i++;
    }
    a = m * (s * s);
    printf("Area of the largest possible square is %dsqcm", a);
}