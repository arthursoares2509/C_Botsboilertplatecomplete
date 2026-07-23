#include <stdio.h>

typedef struct
{
    char name[30];
    float grade;
} Student;

int main(void)
{
    Student students[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%29s", students[i].name);
        scanf("%f", &students[i].grade);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s %.2f\n", students[i].name, students[i].grade);
    }

    return 0;
}
