#include<stdio.h>
#include<math.h>
int isPower(int);
int isPower(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    isPower(n)? printf("The number %d is power of two\n",n): printf("The number %d is not power of two\n",n);
    
    
    
    
    return 0;
}