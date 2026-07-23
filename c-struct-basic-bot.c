#include <stdio.h>

typedef struct
{
    char name[50];
    int age;
} Person;

int main(void)
{
    Person person;

    scanf("%49s", person.name);
    scanf("%d", &person.age);

    printf("%s\n", person.name);
    printf("%d\n", person.age);

    return 0;
}
