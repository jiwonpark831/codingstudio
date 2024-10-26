#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int jumsu[5][3]; // 5명의 3과목 점수를 저장하고 있는 2차원 배열
    char classname[3][20] = {"국어", "영어", "수학"};
    int sum_student[5];       // 학생별 총점
    float average_student[5]; // 학생별 평균
    char grade[5];            // 학생별 등급
    int sum_class[3];         // 과목별 총점
    float average_class[3];   // 과목별 평균

    srand(time(0));

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
        {
            jumsu[i][j] = rand() % 51 + 50;
            sum_student[i] += jumsu[i][j];
            sum_class[j] += jumsu[i][j];
        }

    for (int j = 0; j < 3; j++)
        average_class[j] = sum_class[j] / 5.0;
    printf("The scores for 5 students have been generated.\n");
    for (int i = 0; i < 5; i++)
        printf("Student %d - Korean %d, English %d, Math %d\n", i + 1, jumsu[i][0], jumsu[i][1], jumsu[i][2]);
    printf("\n1) The total and average scores for each subject\nKorean - Total %d, Average %.1f\nEnglish - Total %d, Average %.1f\nMath - Total %d, Average %.1f\n\n", sum_class[0], average_class[0], sum_class[1], average_class[1], sum_class[2], average_class[2]);

    printf("2) The total and average scores for each student, along with the grade based on their average\n");
    for (int i = 0; i < 5; i++)
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