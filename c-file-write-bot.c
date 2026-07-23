#include <stdio.h>

int main(void)
{
    FILE *file = fopen("data.txt", "w");

    fprintf(file, "Hello World\n");

    fclose(file);

    return 0;
}
