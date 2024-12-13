#include <stdio.h>
#include <string.h>

void rPrint(char *str, int n);

int main()
{
    char str[80];
    fgets(str, 80, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    rPrint(str, strlen(str));
    return 0;
}
void rPrint(char *str, int n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d. %c\n", strlen(str) - n + 1, str[n - 1]);
        rPrint(str, n - 1);
    }
}