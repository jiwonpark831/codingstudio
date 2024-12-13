#include <stdio.h>

int power(int n, int a);

int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    printf("%d", power(n, a));
    return 0;
}

int power(int n, int a)
{
    if (a == 0)
        return 1;
    else if (a == 1)
        return n;
    else if (a % 2 == 0)
        return power(n, a / 2) * power(n, a / 2);
    else
        return power(n, a / 2) * power(n, a / 2) * n;
}