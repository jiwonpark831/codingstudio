#include <stdio.h>

void PrintCharWithBlank(int blanks, int size, char ch);

int main()
{
    char ch;
    int size;
    int blank;
    scanf("%c %d %d", &ch, &size, &blank);
    if (blank < 0 || size < 0)
    {
        printf("Invalid input");
        return 0;
    }
    PrintCharWithBlank(blank, size, ch);

    return 0;
}

void PrintCharWithBlank(int blanks, int size, char ch)
{
    blanks = blanks + (size - 1);
    int star = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < blanks; j++)
            printf(" ");
        for (int j = 0; j < star; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        blanks--;
        star++;
    }
}