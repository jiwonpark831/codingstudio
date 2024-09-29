#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[30];
    char lastname[30];
    char age_group[4][30] = {"[Youth]", "[Junior]", "[Senior]", "[Silver]"};
    int birthyear;
    int age;

    scanf("%s", firstname);
    scanf("%s", lastname);
    scanf("%d", &birthyear);

    strcat(firstname, " ");
    strcat(firstname, lastname);

    age = 2024 - birthyear;

    if (age >= 65)
        printf("%s %s", age_group[3], firstname);
    else if (65 > age && age >= 40)
        printf("%s %s", age_group[2], firstname);
    else if (40 > age && age >= 21)
        printf("%s %s", age_group[1], firstname);
    else
        printf("%s %s", age_group[0], firstname);

    return 0;
}