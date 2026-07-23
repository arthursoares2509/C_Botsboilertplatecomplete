#include <stdio.h>

int main(void)
{
    int values[5];
    int min;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
    }

    min = values[0];

    for (int i = 1; i < 5; i++)
    {
        if (values[i] < min)
        {
            min = values[i];
        }
    }

    printf("%d\n", min);

    return 0;
}
