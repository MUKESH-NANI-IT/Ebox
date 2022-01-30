/*      Pranav and Change
 
Pranav, an enthusiastic kid visited the "Fun Fair 2017" along with his family. His father wanted him to purchase entry tickets from the counter for his family members. Being a little kid, he is just learning to understand about units of money. Pranav has paid some amount of money for the tickets but he wants your help to give him back the change of Rs. N using minimum number of rupee notes.
 
Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If the change given to Pranav Rs. N is input, write a program to compute smallest number of notes that will combine to give Rs. N.
*/


#include<stdio.h>
int main()
{
    int N;
    int o,t,te,f,ff,h;
    int sum;
    scanf("%d",&N);
    h=N/100;
    N %=100;
    ff=N/50;
    N %=50;
    te=N/10;
    N %=10;
    f=N/5;
    N %=5;
    t=N/2;
    N %=2;
    o=N/1;
    N %=1;
    sum=o+t+f+te+ff+h;
    printf("%d",sum);
    return 0;
    
}


