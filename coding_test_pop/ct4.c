// 22300323 박지원
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char str[100];
    int check1 = 0;
    int check2 = 0;

    scanf("%d", &num);

    sprintf(str, "%d", num);

    if (num % 3 == 0)
        check1 = 1;

    if (strlen(str) == 1)
        check2 = 1;

    for (int i = 0; i < strlen(str) / 2; i++)
        if (str[i] == str[strlen(str) - 1 - i])
            check2 = 1;

    if (check1 == 1 && check2 == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}