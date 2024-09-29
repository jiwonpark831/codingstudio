#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    int alphacount1[26] = {0};
    int alphacount2[26] = {0};

    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    // if (strlen(str1) != strlen(str2))
    // {
    //     printf("No");
    //     return 0;
    // }

    for (int i = 0; i < strlen(str1); i++)
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            int index = str1[i] - 'a';
            alphacount1[index]++;
        }

    for (int i = 0; i < strlen(str2); i++)
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            int index = str2[i] - 'a';
            alphacount2[index]++;
        }

    for (int i = 0; i < 26; i++)

        if (alphacount1[i] != alphacount2[i])
        {
            printf("No");
            return 0;
        }

    printf("Yes");

    return 0;
}