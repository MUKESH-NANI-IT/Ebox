#include<stdio.h>
void interchange(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void printArray(int arr[],int n)
{
    
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void selectionSort(int arr[],int size)
{
    int i,j;
    for(i=1;i<=size-1;i++)
    {
        for(j=i+1;j<=size;j++)
        {
            if(arr[i]>arr[j])
            {
                interchange(&arr[i],&arr[j]);
            }
        }
        printf("Height order of students after iteration %d\n",i);
        printArray(arr,size);
        
    }
    printf("After final comparison of all students, the height order becomes:\n");
    for(i=1;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the total number of students in class\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++)
    {
        printf("Enter the height of student %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Student's height order before sorting:\n");
    printArray(arr,size);
    selectionSort(arr,size);
    
    
    return 0;
}