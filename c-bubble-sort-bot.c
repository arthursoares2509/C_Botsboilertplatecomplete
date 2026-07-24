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
        for (int j = 0; j < 4 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", values[i]);
    }

    return 0;
}
