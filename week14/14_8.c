#include <stdio.h>

int rStrlen(char *str);

int main()
{
    char line[100];
    fgets(line, 100, stdin);
    printf("%d\n", rStrlen(line));
    return 0;
}

int rStrlen(char *str)
{
    if (*str == '\0')
        return 0;

    if (*str == ' ' || *str == '\n' || *str == '\t')
        return rStrlen(str + 1);
    else
        return 1 + rStrlen(str + 1);
}