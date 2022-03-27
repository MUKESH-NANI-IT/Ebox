
// Reverse the digits
 /*
Asha’s birthday is shortly coming and her parents have planned to arrange for a house party. Deepa was Asha’s best friend and was expecting her birthday since a month. This is because Deepa’s Dad has promised her that he and Deepa together would design a Reverse Talking kitty toy all by themselves and gift it to Asha. Deepa believed that Asha might be overjoyed with this gift from her dear friend.

Deepa’s Dad put the best of his efforts to design the toy. As a first module in the design he intended to write a program that would reverse a numeric input given to it. He needs your help to write a recursive function for reversing the digits of the given number N. Please assist him in the task.

Python Function Specifications:
Use the function name and the argument as:
def reverse(n):
This recursive function should return the reverse of a N digit number.

 

C Function Specifications:
Use the function name and the argument as:
int reverse(n):
This recursive function should return the reverse of a N digit number.

Input Format:
The first line of the input is an integer N.

Output Format:
Print the reverse of a N digit number.
Refer sample input and output for formatting specifications.

Sample Input 1:
1234

Sample Output 1:
4321

Sample Input 2:
32333333

Sample Output 2:
33333323
*/
#include<stdio.h>
#include<math.h>
#define Length(x) ((int)log10((double)x))
int s=0,rem;
int reverse(int x){
    if(x)
    {
        rem=x%10;
        s=s*10+rem;
        reverse(x/10);
    }
    else
    {
        return s;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
    
}