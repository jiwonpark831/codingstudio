#include <stdio.h>
#include <string.h>

int main()
{
    char userid[30];
    char password[30];
    char name[30];
    char passwordstar[30];

    scanf("%s", userid);
    scanf("%s", password);

    getchar();
    fgets(name, 30, stdin);
    name[strlen(name)] = '\0';

    if (strlen(password) < 3)
    {
        printf("The password must be at least 3 characters long.\n");
        return 0;
    }

    strncpy(passwordstar, password, 2);

    for (int i = 2; i < strlen(password); i++)
        passwordstar[i] = '*';

    printf("User Id: %s\nPassword: %s\nUser Name: %s", userid, passwordstar, name);

    return 0;
}