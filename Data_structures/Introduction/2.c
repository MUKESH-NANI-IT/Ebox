#include <stdio.h>
#include <stdlib.h>
int *createArray(int size);
void readArray(int *arr, int size);
void printArray(int *arr, int size);
void formNewArray(int *arr1, int size1, int *arr2, int size2, int *arr3, int *size3);

int main()
{
    int n, m, size3 = 0;
    int *arr1, *arr2, *arr3;
    printf("Enter the number of elements in the first array\n");
    scanf("%d", &n);
    arr1 = createArray(n);
    printf("Enter the elements in the first array\n");
    readArray(arr1, n);
    printf("Enter the number of elements in the second array\n");
    scanf("%d", &m);
    arr2 = createArray(m);
    printf("Enter the elements in the second array\n");
    readArray(arr2, m);
    arr3 = createArray(n);
    formNewArray(arr1, n, arr2, m, arr3, &size3);
    printf("The first array is\n");
    printArray(arr1, n);
    printf("The second array is\n");
    printArray(arr2, m);
    if (size3 > 0)
    {
        printf("The new array formed is\n");
        printArray(arr3, size3);
    }
    else
    {
        printf("There are no elements in the new array\n");
    }
    return 0;
}

int *createArray(int size)
{
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    return arr;
}

void readArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        scanf("%d", arr + i);
}

void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

void formNewArray(int *arr1, int size1, int *arr2, int size2, int *arr3, int *size3)
{
    /* ------------------ Fill Your Code Here --------------------------------*/
    int i, j, c = 0;
    for (i = 0; i < size2; i++)
    {
        c = 0;
        for (j = 0; j < size1; j++)
        {
            if (*(arr2 + i) == *(arr1 + j))
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            *(arr3 + *size3) = *(arr2 + i);
            *size3 = *size3 + 1;
        }
    }
}