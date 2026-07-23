#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];

    scanf("%99s", text);

    printf("%zu\n", strlen(text));

    return 0;
}
