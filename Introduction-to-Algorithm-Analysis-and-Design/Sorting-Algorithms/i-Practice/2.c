#include <stdio.h>
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
        printf("Arrangement of cards after iteration %d\n", step);
        printArray(array, size);
    }
}

// Driver code
int main()
{

    int size ;
    printf("Enter the total number of cards\n");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter card number %d\n", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cards before being sorted:\n");
    printArray(array, size);
    insertionSort(array, size);
    printf("Finally the sorted card order is:\n");
    printArray(array, size);
}