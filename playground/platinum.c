#include<stdio.h>

int main(void)
{
    float weight = 0.0;
    float value = 0.0;

    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);

    value = 1700.0 * weight * 14.5833;

    printf("Weight in platinum is worth $%.2f\n", value);

    return 0;
}