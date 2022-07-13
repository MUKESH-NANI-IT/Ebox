#include <stdio.h>
#include <stdbool.h>
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
        {
            printf("Height order of students after iteration %d\n", i + 1);
            printArray(arr, n);
            break;
        } 
        printf("Height order of students after iteration %d\n", i + 1);
        printArray(arr, n);

    }

}


int main()
{
    int size;
    printf("How many students can be seated in a bench?\n");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; ++i)
    {
        printf("Enter the height of student %d\n", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Height order of students before sorting:\n");
    printArray(array, size);
    bubbleSort(array, size);

    printf("Final sorting of students in a bench are:\n");
    printArray(array, size);
    return 0;
}