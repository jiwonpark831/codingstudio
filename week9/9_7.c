#include <stdio.h>

int which_first(char *str1, char *str2);

int main()
{
    char string1[12];
    char string2[12];
    int menu;
    scanf("%s", string1);
    scanf("%s", string2);
    menu = which_first(&string1, &string2);
    if (menu == 1)
        printf("The first string comes first in the dictionary.");
    else
        printf("The second string comes first in the dictionary.");

    return 0;
}
int which_first(char *str1, char *str2)
{
    int i = 0;
    while (i = 12)
    {
        if (str1[i] < str2[i])
            return 1;
        else if (str1[i] > str2[i])
            return 2;
        else
            i++;
    }
}