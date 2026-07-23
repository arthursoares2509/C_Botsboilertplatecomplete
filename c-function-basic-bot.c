#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(void)
{
    int result = sum(10, 20);

    printf("%d\n", result);

    return 0;
}
