#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int size);
int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));

    printf("The elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int maximum = findMax(array, n);
    printf("Maximum is: %d\n", maximum);

    free(array);

    return 0;
}

int findMax(int *arr, int size)
{
    int maximum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}