#include <stdio.h> 
float getMedian(int array1[], int array2[], int n)
{
    int i = 0; 
    int j = 0; 
    int count;
    int m1 = -1, m2 = -1;

    for (count = 0; count <= n; count++)
    {
        if (i == n)
        {
            m1 = m2;
            m2 = array2[0];
            break;
        }
        else if (j == n)
        {
            m1 = m2;
            m2 = array1[0];
            break;
        }
        if (array1[i] < array2[j])
        {
            m1 = m2;
            m2 = array1[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = array2[j];
            j++;
        }
    }
    return (m1 + m2) / 2;
}

int main()
{   
    int n1,n2;
    printf("Enter the number of elements in the first array:\n");
    scanf("%d", &n1);
    int array1[n1];
    printf("Enter the elements of the first array:\n");
    for (int  i = 0; i < n1; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter the number of elements in the second array:\n");
    scanf("%d",&n2);
    int array2[n2];
    printf("Enter the elements of the second array:\n");
    for (int  i = 0; i < n2; i++)
    {
        scanf("%d",&array2[i]);
    }
    float ans = (float) getMedian(array1, array2, n1);
    if (n1 == n2){
        printf("Median is %0.1f", ans);
        return 0;
    }
    getchar();
    return 0;
}