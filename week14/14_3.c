#include <stdio.h>

int ackermann(int i, int j);

int main()
{

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            printf("Ackermann(%d, %d) = %d\n", i, j, ackermann(i, j));
    return 0;
}

int ackermann(int i, int j)
{
    if (i == 0 && j >= 0)
        return j + 1;
    else if (i > 0 && j == 0)
        return ackermann(i - 1, 1);
    else if (i > 0 && j > 0)
        return ackermann(i - 1, ackermann(i, j - 1));
}