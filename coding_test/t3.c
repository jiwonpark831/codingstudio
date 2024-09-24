#include <stdio.h>

// 학번, 이름 Student ID, Name
// 22300323 박지원

// 아너코드 선언 Honor code
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

// 이곳에 생각을 적을 것! Your thoughts here!
// 1. 위아래로 나누고 위부터
// 2. blank와 <의 초기값을 설정한다
// 3. 이중 반복문을 통해 한줄을 반복할때마다 blank--, a++
// 4. 만약 size/2보다 작으면 공백, 크면 = 출력 (size*2개 만큼)
// 5. 사이즈를 size-1로 줄이고 1-4의 과정을 방향만 바꿔서 반대로 한다

int main()
{
    int size; // 방향, 크기
    int blank;
    int a;
    scanf("%d", &size);
    blank = size - 1;
    a = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < blank; j++)
            printf(" ");
        for (int j = 0; j < a; j++)
            printf("<");
        for (int j = 0; j < size * 2; j++)
            if (i < size / 2)
                printf(" ");
            else
                printf("=");
        for (int j = 0; j < a; j++)
            printf(">");
        printf("\n");
        blank--;
        a++;
    }

    blank = 1;
    a = size - 1;
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < blank; j++)
            printf(" ");
        for (int j = 0; j < a; j++)
            printf("<");
        for (int j = 0; j < size * 2; j++)
            if (i < size / 2)
                printf("=");
            else
                printf(" ");
        for (int j = 0; j < a; j++)
            printf(">");
        printf("\n");
        blank++;
        a--;
    }

    return 0;
}