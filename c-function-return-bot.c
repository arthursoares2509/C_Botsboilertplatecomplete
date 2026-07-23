#include <stdio.h>

double average(double a, double b)
{
    return (a + b) / 2.0;
}

int main(void)
{
    double result = average(7.5, 8.5);

    printf("%.2f\n", result);

    return 0;
}
