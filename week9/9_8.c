#include <stdio.h>
#include <string.h>

void reverseString(char *str);

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    reverseString(&str);
    printf("%s", str);

    return 0;
}

void reverseString(char *str)
{
    int length;
    length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}