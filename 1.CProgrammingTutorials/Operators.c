#include <stdio.h>

int main()
{
    float a, b, sum, diff, product, div;

    // a = 12;
    // b = 13;

    printf("Enter num1: ");
    scanf("%f", &a);
    printf("Enter num2: ");
    scanf("%f", &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    div = a / b;


    printf("num1 + num2 = %f\n", sum);
    printf("num1 - num2 = %f\n", diff);
    printf("num1 * num2 = %f\n", product);
    printf("num1 / num2 = %f\n", div);



    return 0; 
}