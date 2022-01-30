/*
                                                                  Change Position

The room that Patrick and Johnny were staying was very big. They felt lazy to walk inside the room from the bed's location to another location. So they wanted to change the position of the bed. The shape of the room is a Square. They decided to place the bed at the centre of the room so that their walking distance would be minimised. Can you please help them in placing the bed at the centre?



Given the coordinates of the left bottom vertex of the square room and the length of the side, you need to write a program to determine the coordinates of the centre of the room.

[Assumption --- Length of the side is always even]


Input Format:

Input consists of 3 integers. The first integer corresponds to the x-coordinate of the left bottom vertex. The second integer corresponds to the y-coordinate of the left bottom vertex. The third integer corresponds to the length of the square.

Output Format:

Refer Sample Input and Output for exact formatting specifications.


Sample Input and Output:

[All text in bold corresponds to input and the rest corresponds to output]

Enter the x-coordinate of the left bottom vertex

10

Enter the y-coordinate of the left bottom vertex

30

Enter the length of a side

16

The centre of the room is at (18,38)

*/

#include <stdio.h>
int main()
{
  int x, y, l;

  printf("Enter the x-coordinate of the left bottom vertex\n");
  scanf("%d", &x);
  printf("Enter the y-coordinate of the left bottom vertex\n");
  scanf("%d", &y);
  printf("Enter the length of a side\n");
  scanf("%d", &l);
  x = x + (l / 2);
  y = y + (l / 2);
  printf("The centre of the ground is at %d,%d", x, y);
  return 0;
}