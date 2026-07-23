#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;

    scanf("%d", &size);

    int *values = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", values[i]);
    }

    free(values);

    return 0;
}
