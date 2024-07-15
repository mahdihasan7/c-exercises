#include <stdio.h>

void pointerSwap(int *a, int *b);
int main(void)
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    pointerSwap(&a, &b);
    printf("After swap: %d %d", a, b);
}
void pointerSwap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}