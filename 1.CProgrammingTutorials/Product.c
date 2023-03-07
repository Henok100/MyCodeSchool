#include <stdio.h>

int main()
{
    int a, b, c;

    // a = 12;
    // b = 13;

    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);

    c = a * b;

    printf("num1 = %d\nnum2 = %d\nnum1*num2 = %d\n", a, b, c);

    return 0; 
}