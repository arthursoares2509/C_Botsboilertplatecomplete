#include <stdio.h>

int main(void)
{
    int values[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &values[i]);
        sum += values[i];
    }

    printf("%d\n", sum);

    return 0;
}
