#include <stdio.h>

void reverseArray(int *arr, int size);
int main(void)
{
    //taking size of array from user
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    //taking the array from user
    int array[n];
    printf("The elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    //initiating the reverse array
    reverseArray(array, n);

    //showing output of the reversed array
    printf("Reversed: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
    
}

void reverseArray(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size / 2; i++)//replacing the alreading existing array's elements each other without creating a new array
    {
        temp = arr[i];
        arr[i] = arr[size - 1 -i];
        arr[size - 1 -i] = temp;
    }
}