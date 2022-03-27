/**Hotel Royal Gardenia has arranged for an elite business party for the lead industrialists and celebrities of the City. Followed by a dinner buffet, the Event coordinators planned for some casino game events for the high-toned crowd. Peter was a visitor at the party and he takes some number of rubles to the casino with the intention of becoming rich. He plays three machines in turn. Unknown to him, the machines are entirely predictable. Each play costs one ruble. The first machine pays 20 rubles every 25th time it is played; the second machine pays 80 rubles every 120th time it is played; the third pays 8 rubles every 12th time it is played.
Given the number of rubles with Peter initially (there will be at least one and fewer than 1000), and the number of times each machine has been played since it last paid, write a program that calculates the number of times Peter plays until he goes broke.

Input Format:
First line of the input is an integer that corresponds to the number of rubles with Peter initially.
Next 3 lines of the input is an integer that corresponds to the number of times each machine has been played since it last paid.

Output Format:
Output a single line that gives the number of times Peter plays until he goes broke.
Refer sample input and output for formatting specifications.

Sample Input 1:
48
3
12
4

Sample Output 1:
Peter plays 56 times before going broke

Sample Input 2:
35
10
30
9

Sample Output 2:
Peter plays 71 times before going broke
**/
/*                                                              CODE                                                        */
#include<stdio.h>
int main(){
    int r,m1,m2,m3;
    scanf("%d%d%d%d",&r,&m1,&m2,&m3);
    int c1=0,c2=0,c3=0;
    int t1=25-m1;
    int t2=120-m2;
    int t3=12-m3;
    int n1=0,n2=0,n3=0;
    while(r>0){
        c1++;
        if(n1==0 && c1==t1){
            r+=20;
            r--;
            n1=t1+25;
        }
        else if(c1==n1){
            n1+=25;
            r+=20;
            r--;
        }
        else{
            r--;
            if(r==0){
                break;  
            }    
        }
        c2++;
        if(n2==0 && c2==t2){
         r+=80;
            r--;
            n2=t2+120;
        }
        else if(c1==n1){
            n2+=120;
            r+=80;
            r--;
        }
        else{
            r--;
            if(r==0){
                break;  
            }    
        }
        c3++;
        if(n3==0 && c3==t3){
         r+=8;
            r--;
            n3=t3+12;
        }
        else if(c3==n3){
            n3+=12;
            r+=8;
            r--;
        }
        else{
            r--;
            if(r==0){
                break;  
            }    
        }
    }
    printf("Peter plays %d times before going to broke",c1+c2+c3);
    return 0;
}
