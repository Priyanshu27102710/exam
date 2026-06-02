#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter first integer = ");
    scanf("%d", &num1);

    printf("Enter second integer = ");
    scanf("%d", &num2);

    printf("\nBefore swapping = ");
    printf("num1 = %d, num2 = %d", num1, num2);

    swap(&num1, &num2);

    printf("\nAfter swapping = ");
    printf("num1 = %d, num2 = %d", num1, num2);

    return 0;
}