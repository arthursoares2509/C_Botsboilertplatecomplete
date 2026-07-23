#include <stdio.h>

int main(void)
{
    int values[5];
    int max;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
    }

    max = values[0];

    for (int i = 1; i < 5; i++)
    {
        if (values[i] > max)
        {
            max = values[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
