#include <stdio.h>

int main()
{
    int i, j;                                                          // 반복문을 위한 변수
    int jumsu;                                                         // 점수 게산용 점수
    int count = 0;                                                     // 인원수 계산용 변수
    char names[5][20] = {"James", "David", "Simon", "Peter", "Jason"}; // 학생 이름
    int sheet[5][10];                                                  // 학생별 답안내용
    int answer[10] = {1, 2, 3, 4, 1, 2, 3, 4, 3, 2};                   // 정답순서
    int grade[5] = {0};                                                // 학생별 등급

    // 1. 한줄씩 정답과 비교해서 정답일 때마다 grade[i]의 값을 1씩 증가시킨다
    // 2. grade[i]가 9 이상이면 count++하고 i번째 사람 이름을 출력한다

    for (i = 0; i < 5; i++)
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &sheet[i][j]); // i번째 학생의 답안 10개입력
            if (sheet[i][j] == answer[j])
                grade[i]++;
        }

    printf("Grade result\n");
    printf("1st : ");
    for (i = 0; i < 5; i++)
        if (grade[i] >= 9)
        {
            count++;
            printf("%s ", names[i]);
        }
    printf("(%d)\n", count);

    count = 0;
    printf("2nd : ");
    for (i = 0; i < 5; i++)
        if (grade[i] == 7 || grade[i] == 8)
        {
            count++;
            printf("%s ", names[i]);
        }
    printf("(%d)\n", count);

    count = 0;
    printf("Fail : ");
    for (i = 0; i < 5; i++)
        if (grade[i] < 7)
        {
            count++;
            printf("%s ", names[i]);
        }
    printf("(%d)\n", count);

    return 0;
}