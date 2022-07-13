#include <stdio.h>
#include <stdlib.h>

int assignHole(int mices[], int holes[],
               int n, int m)
{
    if (n != m)
        return -1;


    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mices[i] > mices[j])
            {
                int temp = mices[i];
                mices[i] = mices[j];
                mices[j] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (holes[i] > holes[j])
            {
                int temp = holes[i];
                holes[i] = holes[j];
                holes[j] = temp;
            }
        }
    }

  int max = 0;
    for (int i = 0; i < n; ++i)
    {
        if (max < abs(mices[i] - holes[i]))
            max = abs(mices[i] - holes[i]);
    }
    return max;
}


int main()
{

    
   


    int n ;
    scanf("%d",&n);
    int m=n;
    int mices[n];

    int holes[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&mices[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&holes[i]);
    }
 
    int minTime = assignHole(mices, holes, n, m);

    printf("%d", minTime);

    return 0;
}


