#include <stdio.h>

int factorial(int x);

int main()
{
    printf("Enter the number you want to calculate the factorial: ");
    int x;
    scanf("%d", &x);

    printf("Factorial of %d is %d\n", x, factorial(x));

    return 0; 
}

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}