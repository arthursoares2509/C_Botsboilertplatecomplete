#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}
