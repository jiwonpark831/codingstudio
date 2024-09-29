#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char new[100];
    int j = 0;
    int result = 1;
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++)
        if (isalpha(str[i]))
        {
            new[j] = str[i];
            j++;
        }

    // printf("%s", new);

    for (int i = 0; i < strlen(new) / 2; i++)
        if (new[i] == new[strlen(new) - 1 - i])
            result = 1;
        else
        {
            printf("No");
            return 0;
        }
    if (result == 1)
        printf("Yes");

    return 0;
}