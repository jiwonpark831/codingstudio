#include <stdio.h>

int main()
{
    int countUp = 0;    // 대문자 수
    int countLow = 0;   // 소문자 수
    int countSpace = 0; // 빈칸 수
    char line[100];

    FILE *file;
    file = fopen("data.txt", "r");
    while (!feof(file))
    {
        if (fgets(line, 100, file) == NULL)
            break;
        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] >= 'A' && line[i] <= 'Z')
                countUp++;
            else if (line[i] >= 'a' && line[i] <= 'z')
                countLow++;
            else if (line[i] == ' ')
                countSpace++;
        }
    }
    printf("Uppercase letters: %d, Lowercase letters: %d, Spaces: %d", countUp, countLow, countSpace);
    fclose(file);
    return 0;
}