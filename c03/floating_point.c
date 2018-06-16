#include <stdio.h>

int main(void)
{
    float input;
    printf("Enter a floating point number: ");
    while (scanf("%f", &input) == 1)
    {
        printf("Fixed point notation: %f\n", input);
        printf("Exponential notation: %e\n", input);

        printf("Enter a floating point number: ");
    }

    return 0;
}