#include <stdio.h>

int markbingo(int num, int b[]);
// 파라미터 : 선택된 칸번호(num), 빙고매트릭스(b)
// 리턴값 : 이미 마크되어 있었음 0,
//        마크 안되어 마크하였는데 빙고 완성됨 1,
//        마크 안되어 마크하였는데 빙고는 미완성 -1,
// 수행내용 : 현재의 빙고매트릭스에 선택된 칸번호에 해당되는
//          칸 검사한 후 마크함
void printBingo(int b[]);
// 파라미터 : 빙고매트릭스(b)
// 리턴값 : 없음
// 수행내용 : 현재의 빙고매트릭스 내용 표현

int main(void)
{
    int bingo[25] = {0}; // 빙고용 매트릭스
    int num;
    int s;

    while (1)
    {
        printf("Enter a number(1~25) > ");
        scanf("%d", &num);
        if (num > 25 || 1 > num)
        {
            printf("EXIT!\n");
            printBingo(bingo);
            break;
        }
        s = markbingo(num - 1, bingo);
        if (s == -1)
        {
            continue;
        }
        else if (s == 1)
        {
            printf("빙고!\n");
            printBingo(bingo);
            break;
        }
        else if (s == 0)
            printf("중복!\n");
    }
    return 0;
}

int markbingo(int num, int b[25])
{
    int r = num / 5;
    int c = num % 5;

    if (b[num] != 1)
    {
        b[num] = 1;

        int rbingo = 1;
        int cbingo = 1;
        int d1 = 1;
        int d2 = 1;

        for (int i = 0; i < 5; i++)

            if (b[r * 5 + i] == 0)
                rbingo = 0;

        for (int i = 0; i < 5; i++)

            if (b[i * 5 + c] == 0)
                cbingo = 0;

        for (int i = 0; i < 5; i++)
        {
            if (b[i * 5 + i] == 0)
                d1 = 0;
        }

        for (int i = 0; i < 5; i++)
        {
            if (b[i * 5 + (4 - i)] == 0)
                d2 = 0;
        }

        if (rbingo == 1 || cbingo == 1 || d1 == 1 || d2 == 1)
            return 1;
        else
            return -1;
    }
    else
        return 0;
}

void printBingo(int b[25])
{
    printf("BINGO MATRIX\n---------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|");
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
                printf(" %d |\n", b[i * 5 + j]);
            else
                printf(" %d |", b[i * 5 + j]);
        }
        printf("---------------------\n");
    }
}