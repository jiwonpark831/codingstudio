#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user
{
    char userid[20];
    char userpw[20];
};
int getUser(struct st_user *list[]);
int checkUser(struct st_user *list[], int size, struct st_user *temp);

int main(void)
{
    struct st_user *users[20]; // 최대 20명까지를 다룰 수 있음
    struct st_user temp;
    int count = getUser(users);
    printf("%d login informations were read.\n", count);

    while (1)
    {
        int res = checkUser(users, count, &temp);
        if (res == 1)
        {
            printf("로그인 성공! : 어서오세요 %s님\n", temp.userid);
            break;
        }
        else if (res == 2)
            printf("로그인 실패! : 비밀번호가 틀렸습니다.\n");
        else
            printf("Login failed! : The ID does not exist.\n");
    }
}

int getUser(struct st_user *list[])
{
    FILE *file;
    file = fopen("user.txt", "r");
    int count = 0;

    while (!feof(file))
    {
        list[count] = (struct st_user *)malloc(sizeof(struct st_user));
        int ret = fscanf(file, "%s %s", &list[count]->userid, &list[count]->userpw);
        if (ret != 2)
            break;
        count++;
    }
    fclose(file);

    return count;
}
int checkUser(struct st_user *list[], int size, struct st_user *temp)
{
    printf("Please enter the ID and PW you wish to log in with. > ");
    scanf("%s %s", temp->userid, temp->userpw);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(list[i]->userid, temp->userid) == 0)
            if (strcmp(list[i]->userpw, temp->userpw) == 0)
                return 1;
            else
                return 2;
    }
    return 3;
}
