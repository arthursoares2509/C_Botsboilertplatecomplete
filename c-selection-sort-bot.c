#include <stdio.h>

int main(void)
{
    int values[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        int min = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }

        int temp = values[i];
        values[i] = values[min];
        values[min] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", values[i]);
    }

    return 0;
}
