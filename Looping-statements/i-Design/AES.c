/*Varun is the founder of Event Management Company, "Sparsh Services".  In the company all the financial transactions are carried out online and Varun has strictly insisted his staff to do any transactions on web browsers that supports AES encryption numbers.

A number is an AES number if it has exactly four divisors. In other words, there are exactly four numbers that divide into it evenly. For example, 10 is an AES number because it has exactly four divisors (1, 2, 5, 10). 12 is not an AES number because it has too many divisors (1, 2, 3, 4, 6, 12). 11 is not an AES number either. There is only one AES number in the range 10...12.
Given a range of numbers, write a program that counts how many numbers from that range are AES numbers.

Input Format:
The input consists of 2 space-separated integers, which corresponds to the lower limit and the upper limit of the number range.
You may assume that the numbers in the range are less than 1000.

Output Format:
Output a single line that gives the count of AES numbers from the given range.
Refer sample input and output for formatting specifications.

Sample Input 1:
1 20

Sample Output 1:
5

Sample Input 2:
50 100

Sample Output 2:
17
*/
/*****PROGRAM*****/
#include<stdio.h>
int main(){
    int l,u,c,a=0,i;
    scanf("%d%d",&l,&u);
    while(l<=u){
        c=0;
        for(i=1;i<=l;i++){
            if(l%i==0){
                c++;
            }
        }
        if(c==4){
            a++;
        }
        l++;
    }
    printf("%d",a);
}
