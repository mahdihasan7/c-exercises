#include <stdio.h>

void bubbleSort(int *arr, int size);
void swap(int *a, int *b);

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("The elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    bubbleSort(array, n);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int *arr, int size)
{
    int swapped;
    for (int i = 0; i < size; i++)
    {
        swapped = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], & arr[j + 1]);
                swapped = 1;
            }
            
        }
        if (!swapped)
        break;
        
    }
    
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}