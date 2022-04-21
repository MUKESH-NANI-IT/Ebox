#include <stdio.h>
int main()
{
    int n, sum = 0, i, j, t, t1;
    scanf("%d", &n);
    int a[n], k = 0, b[n], c[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    sum = sum / 2;
    t1 = a[0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        t = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] <= sum)
        {
            sum = sum - a[i];
            b[k++] = a[i];
        }
        else
            c[t++] = a[i];
    }
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (b[i] < b[j])
            {
                sum = b[i];
                b[i] = b[j];
                b[j] = sum;
            }
        }
    }
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            if (c[i] < c[j])
            {
                sum = c[i];
                c[i] = c[j];
                c[j] = sum;
            }
        }
    }
    int flag = 0;
    for (i = 0; i < k; i++)
    {
        if (b[i] == t1)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        for (i = 0; i < k; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
        for (i = 0; i < t; i++)
        {
            printf("%d ", c[i]);
        }
    }
    else
    {
        for (i = 0; i < t; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
        for (i = 0; i < k; i++)
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
}