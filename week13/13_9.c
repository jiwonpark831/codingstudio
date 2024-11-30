#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user
{
    char userid[20];
    char userpw[20];
};
struct st_user *getUser(struct st_user *list[], int size);
void saveUser(struct st_user *userlist[], int size, char *filename);

int main(void)
{
    struct st_user *userlist[10]; // 10명의 로그인 데이터 보관용 포인터 배열
    for (int i = 0; i < 10; i++)
    {
        printf("#%d User\n", i + 1);
        userlist[i] = getUser(userlist, i);
    }
    saveUser(userlist, 10, "user.txt");
    return 0;
}

struct st_user *getUser(struct st_user *list[], int size)
{
    struct st_user *user = (struct st_user *)malloc(sizeof(struct st_user));
    char temp[20];

    while (1)
    {
        printf("User ID? ");
        scanf("%s", temp);
        if (strlen(temp) >= 4)
        {
            int check = 0;
            for (int i = 0; i < size; i++)
                if (strcmp(list[i]->userid, temp) == 0)
                    check = 1;

            if (check == 1)
            {
                printf("Duplicate ID. Enter again.\n");
                continue;
            }
            strcpy(user->userid, temp);
            break;
        }
        else
            printf("-> Enter more than 4 letters\n");
    }
    while (1)
    {
        printf("Password? ");
        scanf("%s", temp);
        if (strlen(temp) >= 4)
        {
            strcpy(user->userpw, temp);
            break;
        }
        else
            printf("-> Enter more than 4 letters\n");
    }

    return user;
}
void saveUser(struct st_user *userlist[], int size, char *filename)
{
    FILE *file;
    file = fopen(filename, "w");

    for (int i = 0; i < size; i++)
        fprintf(file, "%s %s\n", userlist[i]->userid, userlist[i]->userpw);

    fclose(file);

    printf("Saved at '%s'\n", filename);
}