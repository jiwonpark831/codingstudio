#include <stdio.h>

struct st_user
{
    char userid[20];
    char userpw[20];
};

int main()
{
    struct st_user s[10];

    for (int i = 0; i < 10; i++)
        scanf("%s %s", s[i].userid, s[i].userpw);

    FILE *fpw = fopen("user.txt", "w");
    for (int i = 0; i < 10; i++)
        fprintf(fpw, "%s %s\n", s[i].userid, s[i].userpw);

    fclose(fpw);

    // 수정 금지(아래 코드)
    FILE *fp = fopen("user.txt", "r");
    char sent[100];
    printf("등록된 사용자 목록\nNo ID   Password\n");
    for (int no = 1; fgets(sent, 100, fp) != NULL; no++)
        printf("%-2d %s", no, sent);
    fclose(fp);
    // 수정 금지(위 코드)

    return 0;
}