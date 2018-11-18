#include <stdio.h>

double cube(double value);

int main(void)
{
    double input = 0.0;
    printf("Enter floating point value: ");
    while (scanf("%lf", &input) != 1)
    {
        while (getchar() != '\n');
        printf("Enter floating point value: ");
    }

    printf("cube: %.2f\n", cube(input));

    return 0;
}

double cube(double value)
{
    return value * value * value;
}