#include <stdio.h>

float calc(float input1, float input2);

int main(void)
{
    float input1 = 0.0f, input2 = 0.0f;
    printf("Enter 2 floating point values with a space in between: ");
    while (scanf("%f %f", &input1, &input2) != 2)
    {
        while (getchar() != '\n')
        printf("Enter 2 floating point values with a space in between: ");
    }

    printf("You entered: %.2f %.2f\n", input1, input2);

    printf("Value: %.2f\n", calc(input1, input2));

    return 0;
}

float calc(float input1, float input2)
{
    return (input1 - input2) / (input1 * input2);
}