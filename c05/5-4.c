#include <stdio.h>

const float cmInInch = 2.54f;

int main(void)
{
    float inputHeightCm = 0.0f;
    float inches = 0.0f;
    int feet = 0;
    float inchesRemainder = 0.0f;
    printf("Enter height in cm: ");
    while(scanf("%f", &inputHeightCm) == 1 && inputHeightCm > 0)
    {
        while(getchar() != '\n');
        inches = inputHeightCm / cmInInch;
        feet = (int)inches / 12;
        inchesRemainder = inches - feet * 12;
        printf("%.1f cm = %d feet, %.1f inches\n", inputHeightCm, feet, inchesRemainder);
        printf("Enter height in cm: ");
    }
    printf("\n");

    return 0;
}