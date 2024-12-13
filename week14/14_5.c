#include <stdio.h>
#include <math.h>

int fibonacci(int n);

int main()
{
    float prev = 0.0;
    float now = 0.0;
    int count = 1;

    while (1)
    {
        float f1 = fibonacci(count);
        float f2 = fibonacci(count + 1);

        now = f2 / f1;

        printf("%dth ration (%.f / %.f) : %.6f\n", count, f2, f1, now);
        if (fabs(now - prev) < 0.000001)
            break;
        prev = now;
        count++;
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