#include <stdio.h>

void increment(int *value)
{
    (*value)++;
}

int main(void)
{
    int number = 10;

    increment(&number);

    printf("%d\n", number);

    return 0;
}
