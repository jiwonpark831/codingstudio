#include <stdio.h>

int rSpaces(char *str);

int main()
{
    char line[100];
    fgets(line, 100, stdin);
    printf("%d\n", rSpaces(line));
    return 0;
}

int rSpaces(char *str)
{
    if (*str == '\0')
        return 0;

    if (*str == ' ' || *str == '\t')
        return 1 + rSpaces(str + 1);
    else
        return rSpaces(str + 1);
}