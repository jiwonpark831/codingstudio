#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    char code[10][20];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            code[i][j] = 'A' + rand() % 26;
        code[i][3] = '-';
        code[i][4] = '0' + rand() % 9 + 1;
        for (int j = 5; j < 10; j++)
            code[i][j] = '0' + rand() % 10;
    }

    printf("10 codes have been generated.\n");
    for (int i = 0; i < 10; i++)
        printf("Code #%d : %s\n", i + 1, code[i]);

    return 0;
}
