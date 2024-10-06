#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int coins;     // 사용자의 코인 수. (최초에 입력받음)
    int number[3]; // 랜덤하게 만들어진 슬롯머신의 숫자 3개
    int dummy;     // 게임스타트를 위한 의미 없는 입력 숫자
    int i;         // 반복문을 위한 변수
    int count = 1;

    printf("Please enter the number of coins you would like to use: ");
    scanf("%d", &coins);

    while (1)
    {
        printf("You have %d coins remaining.\n", coins);
        if (coins == 0)
            break;
        printf("Game %d Start!!! (Please enter any number.) ", count);
        coins--;
        count++;
        scanf("%d", &dummy);

        srand(time(0));
        for (int i = 0; i < 3; i++)
            number[i] = rand() % 9;
        printf("Game result : %d %d %d ----> ", number[0], number[1], number[2]);
        if (number[0] == number[1] && number[1] == number[2])
        {
            printf("Three numbers match... You are awarded 4 extra coins.\n");
            coins += 4;
        }
        else if (number[0] == number[1] || number[1] == number[2] || number[0] == number[2])
        {
            printf("Two numbers match... You are awarded 2 extra coins.\n");
            coins += 2;
        }
        else
            printf("It's a miss... Better luck next time.\n");
    }

    printf("Game over!!");

    return 0;
}