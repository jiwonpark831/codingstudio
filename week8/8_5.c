#include <stdio.h>

void PrintChar(int size, char ch);

int main()
{
    char ch;
    int size;
    scanf("%c", &ch);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &size);
        PrintChar(size, ch);
    }

    return 0;
}

void PrintChar(int size, char ch)
{
    for (int i = 0; i < size; i++)
        printf("%c", ch);
    printf("\n");
}
