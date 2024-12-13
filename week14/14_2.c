#include <stdio.h>

int powerOfTwo(int n);

int main()
{
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int num;
        scanf("%d", &num);
        int pow = powerOfTwo(num);
        printf("%d ", pow);
    }
    return 0;
}

int powerOfTwo(int n)
{

    if (n == 0)
        return 1;
    else
        return 2 * powerOfTwo(n - 1);
}