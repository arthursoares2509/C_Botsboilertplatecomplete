#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100];
    char second[100];

    scanf("%99s", first);
    scanf("%99s", second);

    if (strcmp(first, second) == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}
