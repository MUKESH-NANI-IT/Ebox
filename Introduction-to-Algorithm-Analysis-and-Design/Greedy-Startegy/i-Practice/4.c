#include<stdio.h>
int main()
{
    int i,k,a[10],c[10],n,l;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    k=0;
    c[k]=a[i]+a[i+1];
    i=2;
    while(i<n)
    {
        k++;
        if((c[k-1]+a[i])<=(a[i]+a[i+1]))
           {
                c[k]=c[k-1]+a[i];
            
            }
        else
        {
        
            c[k]=a[i]+a[i+1];
            i=i+2;
            while (i<n)
            {
                
             k++;
             if ((c[k-1]+a[i])<=(c[k-2]+a[i]))
             {
                 c[k]=c[k-1]+a[i];
             }
             else
             {
                 c[k]=c[k-2]+a[i]; 
             }
             i++ ;
             }
        }
             i++;

            
    }
        k++;
        c[k]=c[k-1]+c[k-2];
        printf("The optimal sum are as follows\n");
        for(k=0;k<n-1;k++)
        {
            printf("%d\n",c[k]);
        }
        l=0;
        for(k=0;k<n-1;k++)
        {
            l=l+c[k];
        }
        printf("The total sum is %d\n",l);
}
