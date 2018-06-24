#include <stdio.h>

int main(void)
{
    
    printf("Please enter your height in inches: ");
    float inputInches = 0.0;
    while (scanf("%f", &inputInches) == 1)
    {
        printf("Your height in cm: %4.1f\n", inputInches * 2.54);
        printf("Please enter your height in inches: ");
    }

    return 0;
}