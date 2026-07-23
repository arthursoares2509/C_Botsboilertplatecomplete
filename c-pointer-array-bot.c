#include <stdio.h>

int main(void)
{
    int values[5] = {10, 20, 30, 40, 50};

    int *pointer = values;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(pointer + i));
    }

    return 0;
}
