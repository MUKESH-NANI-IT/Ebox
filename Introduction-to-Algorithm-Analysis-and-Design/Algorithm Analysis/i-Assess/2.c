#include<stdio.h>
int sumOfModulo(int,int);
int sumOfModulo(int N,int K)
{
    int res = 0;
    int i=1;
    while(i<=N)
    {
        res=res+(i%K);
        i++;
    }
    return res;
}
int main()
{
    int N,K;
    scanf("%d\n%d\n",&N,&K);
    int res=sumOfModulo(N,K);
    printf("%d",res);
    return 0;
}