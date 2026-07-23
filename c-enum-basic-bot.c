#include <stdio.h>

enum Status
{
    OFF,
    ON
};

int main(void)
{
    enum Status state = ON;

    printf("%d\n", state);

    return 0;
}
