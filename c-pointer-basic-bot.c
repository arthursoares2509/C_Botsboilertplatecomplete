#include <stdio.h>

int main(void)
{
    int value = 100;
    int *pointer = &value;

    printf("%d\n", value);
    printf("%p\n", (void *)pointer);
    printf("%d\n", *pointer);

    return 0;
}
