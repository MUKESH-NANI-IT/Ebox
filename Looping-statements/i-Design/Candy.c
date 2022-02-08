/*Mona set off with great zeal to the "Fun Fair 2017". There were numerous activities in the fair, though Mona liked the Candy game. Delicious candies were wrapped in colourful foiled sheets with some random numbers on each of the candies. The game coordinators then formed many groups of few candies together, such that each candy group makes an integer and hid them all around the room. The objective of the game is that the players should look for the occurrences of number four anywhere in the integers (candy groups) placed in the room.
 
Mona started off with the game where there are many such integers, for each of them she should calculate the number of occurrences of the digit 4 in the decimal representation. Can you please help her in succeeding the game?
 
Input Format:
The only line of input contains a single integer from the candy group.

Output Format:
Output should contain the number of occurrences of the digit 4 in the respective integer from the candy groups that Mona gets.
Refer sample input and output for formatting specifications.

Sample Input 1:
447474

Sample Output 1:
4

Sample Input 2:
12

Sample Output 2:
0
*/
/*                                                              CODE                                                        */
#include<stdio.h>
int main(){
    int num,tempNum,digit,c;
    int rem;
    scanf("%d",&num);
    digit=4;
    c=0;//count
    tempNum=num;
    while (tempNum>0)
    {
        rem=tempNum%10;
        if (rem==digit)
        {
            c++;
        }
        tempNum=tempNum/10;
    }
    printf("%d",c);
}