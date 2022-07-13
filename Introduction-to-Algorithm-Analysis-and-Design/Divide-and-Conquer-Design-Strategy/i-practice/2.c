#include<malloc.h>
#include<stdio.h>
void merge(int *arr, int l, int m, int r) 
{ 
    //Fill in the code
    int temp[r-l+1];
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            k+=1;
            i+=1;
        }
        else
        {
            temp[k]=arr[j];
            k+=1;
            j+=1;
        }
    }
    while(i<=m)
    {
        temp[k]=arr[i];
        k+=1;
        i+=1;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
        k+=1;
        j+=1;
    }
    for(i=l;i<=r;i+=1)
    {
        arr[i]=temp[i-l];
    }
} 

void mergeSort(int *arr, int l, int r) 
{ 
    //Fill in the code
    if(l<r)
    {
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
} 

int main() 
{ 
    int *arr;
    int n,i;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int l,r,s;
    l=0;
    r=n-1;
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",(arr+i));
    }
    printf("The elements after merge sort is\n");
    mergeSort(arr,l,r);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(arr + i));
    }
}

