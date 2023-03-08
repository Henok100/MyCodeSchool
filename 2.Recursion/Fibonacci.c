#include <stdio.h>

int Fib(int x);

int main()
{
    printf("Enter the number you want to calculate the Fibonacci: ");
    int x;
    scanf("%d", &x);

    printf("Fibonacci series at %d is %d\n", x, Fib(x));

    return 0; 
}

//Iterative
int Fib(int x)
{
    if (x <= 1)
    {
        return x;
    }
    else
    {
        int F1, F2, f;
        F1 = 0;
        F2 = 1;
        for (int i = 2; i <= x; i++)
        {
            f = F1 + F2;
            F1 = F2;
            F2 = f;
        }
        return f;
    }
}
    // Recursion
  /*   int Fib(int x)
    {
        if (x <= 1)
        {
            return x;
        }
        else
        {
            return Fib(x-1) + Fib(x-2);
        }
    } */