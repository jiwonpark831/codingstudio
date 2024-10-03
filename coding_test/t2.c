#include <stdio.h>

// 학번, 이름 Student ID, Name
// 22300323 박지원

// 아너코드 선언 Honor code
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

// 이곳에 생각을 적을 것! Your thoughts here!
// 1. direction과 size를 입력받는다
// 2. 만약 direction이 1이면
// - 1-5줄: blank(초기값: 0)를 찍고 >를 size만큼 출력한다
//          줄을 바꾸고 blank를 ++
// - 6-9줄: blank(초기값: 3)를 찍고 >를 size만큼 출력한다
//          줄을 바꾸고 blank를 --
// 3. direction이 2면
// - 1-5줄: blank(초기값: 4)를 찍고 <를 size만큼 출력한다
//          줄을 바꾸고 blank를 --
// - 6-9줄: blank(초기값: 0)를 찍고 <를 size만큼 출력한다
//          줄을 바꾸고 blank를 ++

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