/*****In connection to the International Mathematics Day celebration, the Mathematical Scholars Society had arranged for a Maths Challenge Event where school students participated in large numbers. The first level of the challenge was an oral quiz, followed by a written test in the second round.


In the second round, the problem that the students had to answer, goes like this:
For every positive number ‘n’ we define a function streak(n)=k as the smallest positive integer k such that n+k is not divisible by k+1.

 

For example:

13 is divisible by 1
14 is divisible by 2
15 is divisible by 3
16 is divisible by 4
17 is NOT divisible by 5
So streak(13)=4.
Similarly:
120 is divisible by 1
121 is NOT divisible by 2
So streak(120)=1.

Now, define P(k, N) which will give the number of integers n, 1<n<=N, for which streak(n) = k. Write a program to get the input as 'k' and 'N' and,
find the count of integers until N which has the streak value as 'k'. 

Input Format:

The first line of the input is an integer ‘k’ which is the streak value of an integer n.
The second line of the input is an integer ‘N’ which is the upper limit of numbers until which P(k, N) is calculated.

Output Format:

The output is an integer that gives the count of integers until ‘N’ which has the streak value as ‘k’.

Refer to sample input and output for formatting specifications.

Sample Input 1:

3
14

Sample Output 1:

1

Explanation:

If s=3 and N=14.
If we start computing streak value for the integers from 1 to N,
For 1,
1 is divisible by 1
2 is divisible by 2
3 is divisible by 3
4 is divisible by 4 
so the streak value of 1 is more than 3.
For 2,
2 is divisible by 1
3 is NOT divisible by 2
so the streak of 2 is 1.
likewise, we can see only the integer 7 has the streak value of 3 within 14, because
7 is divisible by 1
8 is divisible by 2
9 is divisible by 3
10 is NOT divisible by 4
Hence streak(7) = 3.
So P(3, 14) = 1 and so the output is 1.

Sample Input 2:

1
10

Sample Output 2:

5

Explanation:

The 5 Numbers which has streak 1(k)  Within 10(N)  are 2,4,6,8,10.
******/
/*****PROGRAM*****/
#include<stdio.h>
int main(){
    int k,N,i, result=0;
    scanf("%d",&k);
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        /*
        *discluding 1 from the checking rang
        *since 1 has an infinte streak
        */
       int streak=1,num=i;
        int stop=0;
        //calculating strak
        do{
            if(num%streak==0){
                if(streak>k){
                    stop++;
                }
                else{
                    streak++;
                    num++;
                }
            }
            else{
                //stop streak loop
                //if not divisible 
                streak--;
                stop++;
            }
        }while(!stop);
        //end of streak calculation for 
        //current number
        if(streak==k){
            //check if input streak 'k'
            //is equal to the calculated
            //streak of current number
            result++;
        }
    }
    printf("%d",result);
    return 0;
}