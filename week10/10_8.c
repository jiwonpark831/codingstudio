#include <stdio.h>

int main()
{
    char name[20][100];
    char line[100];
    int count = 0;
    char longestn[100];
    int longest = 0;
    char shortestn[100];
    int shortest = 100;

    FILE *file;
    file = fopen("name.txt", "r");

    while (!feof(file))
    {
        if (!fgets(name[count], 100, file))
            break;
        name[count][strlen(name[count]) - 1] = '\0';

        if (strlen(name[count]) > longest)
        {
            strcpy(longestn, name[count]);
            longest = strlen(name[count]);
        }

        if (strlen(name[count]) < shortest)
        {
            strcpy(shortestn, name[count]);
            shortest = strlen(name[count]);
        }
        count++;
    }

    printf("Count : %d\n", count);
    printf("Longest name : %s\nShortest name : %s", longestn, shortestn);

    return 0;
}