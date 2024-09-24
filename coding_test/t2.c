#include <stdio.h>

// 학번, 이름 Student ID, Name
// 22300323 박지원

// 아너코드 선언 Honor code
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

// 이곳에 생각을 적을 것! Your thoughts here!
// 1. dirction 값에 따라 부호를 나눈다 > 일시..
// 2. 1-4 줄까지 줄을 넘어갈 때마다 blank를 0부터 ++, >를 9번 출력한다
// 3. 5-9 줄까지 줄을 넘어갈 때마다 blank를 4부터 --, >를 9번 출력한다
// 4. <이면 반대 방향으로 2,3을 반복한다

int main()
{
    int direction, size; // 방향, 크기
    int blank;

    scanf("%d %d", &direction, &size);

    if (direction == 1)
    {
        blank = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < blank; j++)
                printf(" ");
            for (int j = 0; j < size; j++)
                printf("> ");
            printf("\n");
            blank++;
        }
        blank = 3;
        for (int i = 5; i < 9; i++)
        {
            for (int j = 0; j < blank; j++)
                printf(" ");
            for (int j = 0; j < size; j++)
                printf("> ");
            printf("\n");
            blank--;
        }
    }
    else
    {
        blank = 4;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < blank; j++)
                printf(" ");
            for (int j = 0; j < size; j++)
                printf("< ");
            printf("\n");
            blank--;
        }
        blank = 1;
        for (int i = 5; i < 9; i++)
        {
            for (int j = 0; j < blank; j++)
                printf(" ");
            for (int j = 0; j < size; j++)
                printf("< ");
            printf("\n");
            blank++;
        }
    }

    return 0;
}