#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_person
{
    char name[20];
    char address[80];
    int age;
};

struct st_person *getPerson();

int main()
{

    struct st_person *p[3];

    for (int i = 0; i < 3; i++)
    {
        p[i] = getPerson();
    }

    for (int i = 0; i < 3; i++)
        printf("%d. %s / %s / %d\n", i + 1, p[i]->name, p[i]->address, p[i]->age);

    return 0;
}

struct st_person *getPerson()
{
    struct st_person *person = (struct st_person *)malloc(sizeof(struct st_person));

    fgets(person->name, 20, stdin);
    if (person->name[strlen(person->name) - 1] == '\n')
        person->name[strlen(person->name) - 1] = '\0';
    fgets(person->address, 80, stdin);
    if (person->address[strlen(person->address) - 1] == '\n')
        person->address[strlen(person->address) - 1] = '\0';
    scanf("%d", &person->age);
    getchar();

    return person;
}