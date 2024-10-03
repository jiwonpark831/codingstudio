#include <stdio.h>

// 학번, 이름 Student ID, Name
// 22300323 박지원

// 아너코드 선언 Honor code
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

// 이곳에 생각을 적을 것! Your thoughts here!
// 왼쪽, 오른쪽 화살표: 1부터 시작해서 size까지 증가하다가 == size가 되면 1씩 감소
// 중간: 크기*2
// 1. 위(size만큼)
// - blank(size-1)와 a(1)의 초기값을 설정한다
// - 공백,a,중간,a 순서로 찍는다 이때 중간부분은 size/2보다 작으면 공백, 크면 =를 출력 (size*2개 만큼)
// - 줄을 바꾸고 blank--, a++
// 2. 아래(size-1)
// - blank(1)와 a(size-1)의 초기값을 설정한다
// - 공백,a,중간,a 순서로 찍는다 이때 중간부분은 size/2보다 작으면 공백, 크면 =를 출력 (size*2개 만큼)
// - 줄을 바꾸고 blank++, a--

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
    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 0; j < blank; j++)
            printf(" ");
        for (int j = 0; j < a; j++)
            printf("<");
        if (i <= size / 2)
            for (int j = 0; j < size * 2; j++)
                printf(" ");
        else
            for (int j = 0; j < size * 2; j++)
                printf("=");
        for (int j = 0; j < a; j++)
            printf(">");
        printf("\n");
        blank++;
        a--;
    }

    return 0;
}