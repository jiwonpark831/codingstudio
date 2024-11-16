#include <stdio.h>

struct st_person
{
    char name[20];
    char address[80];
    int age;
};

int main()
{
    struct st_person p[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &p[i].name);
        getchar();
        fgets(p[i].address, 80, stdin);
        if (p[i].address[strlen(p[i].address) - 1] == '\n')
            p[i].address[strlen(p[i].address) - 1] = '\0';
        scanf("%d", &p[i].age);
    }

    for (int i = 0; i < 3; i++)
        printf("%d. %s/ %s/ %d\n", i + 1, p[i].name, p[i].address, p[i].age);

    return 0;
}
