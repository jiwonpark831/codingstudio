#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];     // 입력받은 문자열
    char reverse[100]; // 순서를 거꾸로 바꾼 문자열

    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++)
        reverse[i] = str[strlen(str) - 1 - i];

    reverse[strlen(str)] = '\0';

    printf("%s", reverse);

    return 0;
}