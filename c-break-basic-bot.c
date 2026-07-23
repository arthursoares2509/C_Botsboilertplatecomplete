#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 15)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}
