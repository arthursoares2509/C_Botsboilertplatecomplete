#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int step;

    printf("Start: ");
    scanf("%d", &start);

    printf("End: ");
    scanf("%d", &end);

    printf("Step: ");
    scanf("%d", &step);

    for (int i = start; i <= end; i += step)
    {
        printf("%d\n", i);
    }

    return 0;
}
