#include <stdio.h>

int main(void)
{
    int value = 0;

    do
    {
        printf("%d\n", value);
        value++;
    }
    while (value < 10);

    return 0;
}
