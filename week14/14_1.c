#include <stdio.h>

int fibonacci(int n);

int main()
{
    printf("Fibonacci number from 1 to 20\n");
    for (int i = 1; i <= 20; i++)
    {
        int fbnc = fibonacci(i);
        printf("%d: %d\n", i, fbnc);
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}