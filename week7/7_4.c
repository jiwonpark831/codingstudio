#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int com_finger;        // 컴퓨터가 낸 가위(1), 바위(2), 보(3)
    int my_finger;         // 사용자가 낸 바위(1), 보(2), 가위(3)
    int score[2][3] = {0}; // 결과 횟수 (1행 : 컴퓨터의 승, 무, 패, 2행 : 사용자의 승, 무, 패)
    int i, j;              // 반복문을 위한 변수

    while (1)
    {
        srand(time(0));
        com_finger = rand() % 3;
        printf("Please enter Rock (1), Paper (2), or Scissors (3). ");
        scanf("%d", &my_finger);
        if (my_finger == 0)
            break;
        if (com_finger == 1)
        {
            if (my_finger == 3)
            {
                printf("Computer: Scissors -> Draw~\n");
                score[0][1]++;
                score[1][1]++;
            }
            else if (my_finger == 1)
            {
                printf("Computer: Scissors -> User Wins!\n");
                score[0][2]++;
                score[1][0]++;
            }
            else
            {
                printf("Computer: Scissors -> Computer Wins!\n");
                score[0][0]++;
                score[1][2]++;
            }
        }
        else if (com_finger == 2)
        {
            if (my_finger == 3)
            {
                printf("Computer: Rock -> Computer Wins!\n");
                score[0][0]++;
                score[1][2]++;
            }
            else if (my_finger == 1)
            {
                printf("Computer: Rock -> Draw~\n");
                score[0][1]++;
                score[1][1]++;
            }
            else
            {
                printf("Computer: Rock -> User Wins!\n");
                score[0][2]++;
                score[1][0]++;
            }
        }
        else
        {
            if (my_finger == 3)
            {
                printf("Computer: Paper -> User Wins!\n");
                score[0][2]++;
                score[1][0]++;
            }
            else if (my_finger == 1)
            {

                printf("Computer: Paper -> Computer Wins!\n");
                score[0][0]++;
                score[1][2]++;
            }
            else
            {
                printf("Computer: Paper -> Draw~\n");
                score[0][1]++;
                score[1][1]++;
            }
        }
    }

    printf("\nComputer: %d wins, %d losses, %d draw\nUser: %d wins, %d losses, %d draw", score[0][0], score[0][2], score[0][1], score[1][0], score[1][2], score[1][1]);
    return 0;
}