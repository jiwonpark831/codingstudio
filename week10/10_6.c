#include <stdio.h>

int main()
{
    char userid[10][20];
    char userpw[10][20];

    FILE *file;
    file = fopen("user.txt", "w");

    for (int i = 0; i < 10; i++)
        scanf("%s %s", userid[i], userpw[i]);

    for (int i = 0; i < 10; i++)
        fprintf(file, "%s %s\n", userid[i], userpw[i]);

    printf("List of registered users\n");
    printf("No ID   Password\n");
    for (int i = 0; i < 10; i++)
        printf("%d  %s %s\n", i + 1, userid[i], userpw[i]);
    printf("Stored at 'user.txt' file.");

    fclose(file);
    return 0;
}