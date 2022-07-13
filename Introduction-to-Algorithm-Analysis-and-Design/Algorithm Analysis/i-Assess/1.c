#include<stdio.h>
long long multiplyLargeInteger(long long,long long,long long);
long long multiplyLargeInteger(long long a,long long b,long long m)
{
    long long ans=0;
    a%=m;
    while(b)
    {
        if(b & 1)
        {
            ans = (ans+a) % m;
        }
        a=(2 * a) % m;
        b >>=1;
    }
    return ans;
}
int main()
{
    long long a,b,m;
    scanf("%lld\n%lld\n%lld\n",&a,&b,&m);
    printf("%lld", multiplyLargeInteger(a,b,m));
    return 0;
}