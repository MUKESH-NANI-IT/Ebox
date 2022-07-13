#include<stdio.h>
int isPower(int);
int isPower(int n)
{
    if(n == 0)
    {
        return 0;
    }
    while(n!=1)
    {
        if(n%4!=0)
        {
            return 0;
        }
        n=n/4;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isPower(n) == 1)
    {
        printf("%d is a power of 4",n);
    }
    else
    {
        printf("%d is not a power of 4",n);
    }
    
    
    return 0;
}