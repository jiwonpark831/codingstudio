#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char pw[20];

    char username[5][20] = {"kim", "lee", "park", "hong", "choi"};
    char password[5][20] = {"1111", "1234", "3456", "3535", "7777"};

    scanf("%s", name);
    scanf("%s", pw);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(name, username[i]) == 0)
        {
            if (strcmp(pw, password[i]) == 0)
            {
                printf("Login successful");
                return 0;
            }
            else
            {
                printf("ID is correct, but the password is incorrect");
                return 0;
            }
        }
    }
    printf("No such ID exists");

    return 0;
}