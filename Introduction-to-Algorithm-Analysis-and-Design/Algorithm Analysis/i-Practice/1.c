#include<stdio.h>
int sum(int);
int main()
{
    int n,t=0;
    printf("Enter the count of natural numbers\n");
    scanf("%d",&n);
    t=sum(n);
    printf("The sum of first %d natural numbers is %d",n,t);
    return 0;
}
int sum(int n)
{
    if(n%2==0)
    {
        return (n/2) * 1LL *(n+1);
    }
    else
    {
        return ((n+1)/2) * 1LL *n;
    }
}