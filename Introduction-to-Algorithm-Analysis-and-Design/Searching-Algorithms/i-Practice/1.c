#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter the total number of tickets:\n");
    scanf("%d",&n);
    int lot[n];
    for(i=1;i<=n;++i)
    {
        printf("Enter the ticket number %d:\n",i);
        scanf("%d",&lot[i]);
    }
    printf("The ticket numbers are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",lot[i]);
    }
    printf("Enter the ticket number to be searched:\n");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        if(lot[i]==k)
        {
            break;
        }
    }
    if(i<=n)
    {
        printf("The ticket number %d is found at position %d",k,i);
        printf("Congratulations!You have won the lottery");
    }
    else{
        printf("Sorry the ticket number %d is not there.Better luck next time!",k);
    }
    
    
    return 0;
}