#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int readtext(char *p[]);

int main()
{
    char *pstr[20]; // 실제로 저장될 최대 20개의 문장을 위한 포인터 배열
    char *longest;  // 가장 긴 문장을 가리키는 포인터
    char *shortest; // 가장 짧은 문장을 가리키는 포인터
    int max = 0;
    int min = 0;

    FILE *file;
    char temp[100]; // 임시 문자열
    int count = 0;  // 읽은 문장의 수
    file = fopen("data.txt", "r");
    while (!feof(file))
    {
        if (!fgets(temp, 100, file))
            break; // 읽은 내용이 없으면 중단
        if (temp[strlen(temp) - 1] == '\n')
            temp[strlen(temp) - 1] = '\0';                             // 마지막 개행문자 제거
        pstr[count] = (char *)malloc(sizeof(char) * strlen(temp) + 1); // 메모리 할당
        strcpy(pstr[count], temp);                                     // 문장내용 복사
        count++;                                                       // 문장갯수 증가
    }

    for (int i = 0; i < count; i++)
    {
        if (strlen(pstr[i]) > strlen(pstr[max]))
            max = i;
        if (strlen(pstr[i]) < strlen(pstr[min]))
            min = i;
    }

    longest = pstr[max];
    shortest = pstr[min];

    printf("%d lines read.\nLongest #%d - %s\nShortest #%d - %s", count, max + 1, longest, min + 1, shortest);

    fclose(file);

    return 0;
}
