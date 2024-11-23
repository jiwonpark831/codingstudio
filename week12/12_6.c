#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countVowels(char *str);

int main()
{
    char *pstr[20];
    FILE *file;
    char temp[100]; // 임시 문자열
    int vowel[100];
    int count = 0; // 읽은 문장의 수
    file = fopen("data.txt", "r");
    while (!feof(file))
    {
        if (!fgets(temp, 100, file))
            break; // 읽은 내용이 없으면 중단
        if (temp[strlen(temp) - 1] == '\n')
            temp[strlen(temp) - 1] = '\0';                             // 마지막 개행문자 제거
        pstr[count] = (char *)malloc(sizeof(char) * strlen(temp) + 1); // 메모리 할당
        strcpy(pstr[count], temp);
        vowel[count] = countVowels(pstr[count]);
        count++;
    }

    printf("%d lines read.\n", count);
    for (int i = 0; i < count; i++) // 모든 문장 출력f
        printf("#%d - %s [%d]\n", i + 1, pstr[i], vowel[i]);

    fclose(file);

    return 0;
}

int countVowels(char *str)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;

    return count;
}
