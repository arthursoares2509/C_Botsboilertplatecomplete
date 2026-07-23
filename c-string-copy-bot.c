#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[100];
    char destination[100];

    scanf("%99s", source);

    strcpy(destination, source);

    printf("%s\n", destination);

    return 0;
}
