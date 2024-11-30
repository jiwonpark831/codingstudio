#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user
{
    char userid[20];
    char userpw[20];
};

struct st_user *getUser();

int main()
{
    struct st_user *user;
    user = getUser();

    printf("User ID: %s\n", user->userid);
    printf("Password: %.2s", user->userpw);
    for (int i = 2; i < strlen(user->userpw); i++)
        printf("*");

    return 0;
}

struct st_user *getUser()
{
    struct st_user *user = (struct st_user *)malloc(sizeof(struct st_user));
    char temp[20];

    while (1)
    {
        printf("User ID? ");
        scanf("%s", temp);
        if (strlen(temp) >= 4)
        {
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