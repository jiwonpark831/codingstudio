#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int markBingo(int num, int b[25]);
void shuffleBingo(int b[25]);
void printBingo(int b[25]);

int main()
{
    int bingo[25]; // 빙고용 매트릭스
    int count = 0; // 시도 횟수
    int number;    // 입력받는 번호
    int check;     // 빙고검사결과값
    int i;
    srand(time(0)); // 랜덤 초기화
    // 빙고매트릭스 초기화(1부터 25까지 순서대로 넣음)
    for (i = 0; i < 25; i++)
        bingo[i] = i + 1;

    shuffleBingo(bingo); // 빙고 매트릭스 섞기
    printBingo(bingo);   // 빙고 매트릭스 출력
    while (1)
    {
        printf("Enter a number(1~25) > ");
        scanf("%d", &number);
        if ((number < 1 || number > 25))
            break;
        else
        {
            check = markBingo(number, bingo);
            if (check != 0)
                count++;
            if (check == 1)
                break;
        }
    }
    printBingo(bingo); // 빙고 매트릭스 출력
    printf("Tried %d times!\n", count);
    return 0;
}

int markBingo(int num, int b[25])
{
    int retval = 0;
    int check = 0;
    for (int i = 0; i < 25; i++)
    {
        if (b[i] == num)
        {

            retval = -1;
            check = 1;
            b[i] = 0;

            int row = i / 5;
            int col = i % 5;

            int rcount = 0;
            for (int j = 0; j < 5; j++)
                if (b[row * 5 + j] == 0)
                    rcount++;
            if (rcount == 5)
            {
                printf("Bingo! At row %d\n", row + 1);
                retval = 1;
                break;
            }

            int ccount = 0;
            for (int j = 0; j < 5; j++)
                if (b[col + 5 * j] == 0)
                    ccount++;
            if (ccount == 5)
            {
                printf("Bingo! At column %d\n", col + 1);
                retval = 1;
            }
            break;
        }
    }
    if (check == 0)
    {
        printf("Duplicated!\n");
        return 0;
    }
    return retval;
}

void shuffleBingo(int b[25])
{
    int rand1, rand2;
    int temp;
    for (int i = 0; i < 50; i++)
    {
        rand1 = rand() % 25;
        rand2 = rand() % 25;
        temp = b[rand1];
        b[rand1] = b[rand2];
        b[rand2] = temp;
    }
}

void printBingo(int b[25])
{
    int i;
    printf("BINGO MATRIX\n");
    for (i = 0; i < 25; i++)
    {
        if (i % 5 == 0)
            printf("--------------------------\n|");
        printf(" %2d |", b[i]);
        if (i % 5 == 4)
            printf("\n");
    }
    printf("--------------------------\n");
}