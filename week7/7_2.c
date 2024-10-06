#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int lotto[6]; // 컴퓨터가 만들어 낸 로또 번호
    int count;    // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
    int onemore;  // 반복여부 입력 (1:Yes, 2:No)
    int i;        // 반복문을 위한 변수

    onemore = 1;
    while (1)
    {
        srand(time(0));
        for (int i = 0; i < 6; i++)
        {
            count = rand() % 45 + 1;

            for (int j = 0; j < 6; j++)
            {

                if (lotto[j] == count)
                {
                    i--;
                    break;
                }
                if (i == j)
                    lotto[i] = count;
            }
        }

        printf("The generated lotto numbers are");
        for (int i = 0; i < 6; i++)
            printf(" %d", lotto[i]);
        printf(".\n");

        printf("Would you like to generate more numbers? (1:Yes, 2:No) >> ");
        scanf("%d", &onemore);

        if (onemore != 1)
            break;
    }

    return 0;
}