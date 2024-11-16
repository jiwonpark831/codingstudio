#include <stdio.h>

struct st_user
{
    char userid[20];
    char userpw[20];
};

int main()
{
    struct st_user s[10];

    FILE *fp = fopen("user.txt", "r");
    printf("등록된 사용자 목록\nNo ID   Password\n");
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp, "%s %s", s[i].userid, s[i].userpw);
        printf("%d %s %s\n", i + 1, s[i].userid, s[i].userpw);
    }
    fclose(fp);

    return 0;
}