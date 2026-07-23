#include <stdio.h>

int main(void)
{
    int option;

    scanf("%d", &option);

    switch (option)
    {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;

        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}
