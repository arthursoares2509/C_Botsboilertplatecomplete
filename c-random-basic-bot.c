#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int value = rand() % 100;

    printf("%d\n", value);

    return 0;
}
