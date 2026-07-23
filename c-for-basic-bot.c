#include <stdio.h>

int main(void)
{
    int start;
    int end;

    printf("Start: ");
    scanf("%d", &start);

    printf("End: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
