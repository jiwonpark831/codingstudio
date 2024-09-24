#include <stdio.h>
int main()
{
    int jumsu[5][3];          // 5명의 3과목 점수를 저장하고 있는 2차원 배열
    int sum_student[5] = {0}; // 학생별 총점
    float average_student[5]; // 학생별 평균
    char grade[5];            // 학생별 등급
    int sum_class[3] = {0};   // 과목별 총점
    float average_class[3];   // 과목별 평균
    int i, j;                 // 반복문을 위한 변수

    for (i = 0; i < 5; i++)
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &jumsu[i][j]);
            sum_student[i] += jumsu[i][j];
            sum_class[j] += jumsu[i][j];
        }

    for (j = 0; j < 3; j++)
        average_class[j] = sum_class[j] / 5.0;

    printf("1) The total and average scores for each subject.\nKorean - Total %d, Average %.1f\nEnglish - Total %d, Average %.1f\nMath - Total %d, Average %.1f\n\n", sum_class[0], average_class[0], sum_class[1], average_class[1], sum_class[2], average_class[2]);

    printf("2) The total and average scores for each student, along with the grade based on their average score.\n");
    for (i = 0; i < 5; i++)
    {
        average_student[i] = sum_student[i] / 3.0;
        if (average_student[i] >= 90.0)
            grade[i] = 'A';
        else if (average_student[i] >= 80.0)
            grade[i] = 'B';
        else if (average_student[i] >= 70.0)
            grade[i] = 'C';
        else if (average_student[i] >= 60.0)
            grade[i] = 'D';
        else
            grade[i] = 'F';

        printf("Student %d - Total %d, Average %0.1f (Grade %c)\n", i + 1, sum_student[i], average_student[i], grade[i]);
    }

    return 0;
}