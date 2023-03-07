#include <stdio.h>

int main()
{
    int a, b, sum, diff, product, div;

    // a = 12;
    // b = 13;

    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    div = a / b;


    printf("num1 + num2 = %d\n", sum);
    printf("num1 - num2 = %d\n", diff);
    printf("num1 * num2 = %d\n", product);
    printf("num1 / num2 = %d\n", div);

    return 0; 
}