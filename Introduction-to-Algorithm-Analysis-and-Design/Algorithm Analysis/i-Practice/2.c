#include<stdio.h>
int xPowerN(int,int);
int xPowerN(int x,int n)
{
    int flag;
    if(n==0)
    {
        return 1;
    }
    flag = xPowerN(x,n/2);
    if (n%2 == 0)
    {
        return flag * flag;
    }
    else
    {
        return x*flag*flag;
    }
}
int main()
{
    int x,n,ans;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ans=xPowerN(x,n);
    printf("%d power of %d is %d",x,n,ans);
    return 0;
}