#include<stdio.h>


int binarySearch(int arr[],int key,int low,int high)
{
    while(low<=high)
    {
        int m=low+(high-low)/2;
        if(arr[m]==key)
        {
            return m;
        }
        if(arr[m]<key)
        {
            low=m+1;
        }
        else
        {
            high = m-1;   
        }
    }
    return -1;
}
int main()
{
    int l=1,h,n,i,k;
    printf("Enter the total number of jails in Humayun's Place:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        printf("Enter the jail number %d",i);
        scanf("%d",&arr[i]);
    }
    h=n;
    printf("Enter the clue given by Humayun:\n");
    scanf("%d",&k);
    int res=binarySearch(arr,k,l,h);
    if(res==-1)
    {
        printf("The King has been fooled by Humayun");
    }
    else
    {
        printf("Hurray!The King rescued the Queen");
    }
    
    
    return 0;
}