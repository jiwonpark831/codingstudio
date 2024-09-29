#include <stdio.h>

int main()
{
    char birthday[8];
    int sum = 0;

    scanf("%s", birthday);
    for (int i = 0; i < 4; i++)
        sum += birthday[i] - '0';

    sum += (birthday[4] - '0') * 10;
    sum += birthday[5] - '0';
    sum += (birthday[6] - '0') * 10;
    sum += birthday[7] - '0';

    printf("%d", sum);
    return 0;
}
