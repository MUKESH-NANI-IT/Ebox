#include <stdio.h>
#include <stdlib.h>


static int total_nodes;

void printSubset(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");
}


void subset_sum(int s[], int t[],
                int s_size, int t_size,
                int sum, int ite,
                int const target_sum)
{
    total_nodes++;
    if (target_sum == sum)
    {
        
        printSubset(t, t_size);
        
        subset_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
        return;
    }
    else
    {
        
        for (int i = ite; i < s_size; i++)
        {
            t[t_size] = s[i];
            
            subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
        }
    }
}

void generateSubsets(int s[], int size, int target_sum)
{
    int *tuplet_vector = (int *)malloc(size * sizeof(int));

    subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);

    free(tuplet_vector);
}

int main()
{
    
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int weights[size];
    printf("Enter the array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &weights[i]);
    }
    int ts;
    printf("Enter the target sum\n");
    scanf("%d", &ts);
    printf("Subsets that sum to %d are\n", ts);
    generateSubsets(weights, size, ts);
    return 0;
}