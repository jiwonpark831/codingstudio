#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int lotto_com[6];    // 컴퓨터가 만들어 낸 로또 번호
    int lotto_user[6];   // 사용자가 입력한 로또 번호
    int i;               // 반복문을 위한 변수
    int count;           // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
    int match_count = 0; // 일치하는 로또 번호의 갯수 (0~6)
    int a;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a);
        if (a > 45 || a < 1)
        {
            printf("Invalid input");
            return 0;
        }
        for (int j = 0; j < i; j++)
            if (lotto_user[j] == a)
            {
                printf("Invalid input");
                return 0;
            }

        lotto_user[i] = a;
    }

    printf("Entered lotto numbers are");
    for (int i = 0; i < 6; i++)
        printf(" %d", lotto_user[i]);
    printf(".\n");

    srand(time(0));
    for (int i = 0; i < 6; i++)
    {
        count = rand() % 45 + 1;

        for (int j = 0; j < 6; j++)
        {

            if (lotto_com[j] == count)
            {
                i--;
                break;
            }
            if (i == j)
                lotto_com[i] = count;
        }
    }

    printf("This week's winning lotto numbers are");
    for (int i = 0; i < 6; i++)
        printf(" %d", lotto_com[i]);
    printf(".\n");

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
        {
            if (lotto_com[i] == lotto_user[j])
                match_count++;
        }

    printf("The matching lotto numbers are %d.", match_count);

    return 0;
}