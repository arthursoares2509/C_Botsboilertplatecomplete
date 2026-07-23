#include <stdio.h>

int main(void)
{
    FILE *file = fopen("data.txt", "r");

    char text[100];

    fgets(text, sizeof(text), file);

    printf("%s", text);

    fclose(file);

    return 0;
}
