#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100];
    char second[100];

    scanf("%99s", first);
    scanf("%99s", second);

    strcat(first, second);

    printf("%s\n", first);

    return 0;
}
