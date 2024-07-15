#include <stdio.h>
#include <stdlib.h>

void matrixMultiplication(int **mat1, int **mat2, int **result, int SIZE);
int main(void)
{
    int SIZE;
    printf("Enter the size of matrix: ");
    if (scanf("%d", &SIZE) != 1 || SIZE <= 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    
    int **mat1 = (int **)malloc(SIZE *(sizeof(int *)));
    int **mat2 = (int **)malloc(SIZE *(sizeof(int *)));
    int **result = (int **)malloc(SIZE *(sizeof(int *)));

    for (int i = 0; i < SIZE; i++)
    {
        mat1[i] = (int *)malloc(SIZE *(sizeof(int)));
        mat2[i] = (int *)malloc(SIZE *(sizeof(int)));
        result[i] = (int *)malloc(SIZE *(sizeof(int)));
    }

    printf("Enter the elements of the matrix 1: ");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (scanf("%d", &mat1[i][j]) != 1)
            {
                printf("Invalid Input\n");
                return 1;
            }
        }
    }
    
    printf("Enter the elements of the matrix 2: ");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (scanf("%d", &mat2[i][j]) != 1)
            {
                printf("Invalid Input\n");
                return 1;
            }
        }
    }

    matrixMultiplication(mat1, mat2, result, SIZE);

    printf("The resulting Matrix: ");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < SIZE; i++)
    {
        free(mat1[i]);
        free(mat2[i]);
        free(result[i]);
    }

    free(mat1);
    free(mat2);
    free(result);

    return 0;
}

void matrixMultiplication(int **mat1, int **mat2, int **result, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            
        }
        
    }
    
}