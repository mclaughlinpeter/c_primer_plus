#include <stdio.h>

const float kmPerMile = 1.609;
const float litresPerGallon = 3.785;

int main(void)
{
    printf("Enter the number of miles travelled: ");
    float milesTravelled = 0.0;
    while(scanf("%f", &milesTravelled) != 1)
    {
        while(getchar() != '\n');
        printf("Error, please re-enter number of miles travelled: ");
    }
    while(getchar() != '\n');

    printf("Enter the number of gallons of gasoline consumed: ");
    float gallonsConsumed = 0.0;
    while(scanf("%f", &gallonsConsumed) != 1)
    {
        while(getchar() != '\n');
        printf("Error, please re-enter number of gallons of gasoline consumed: ");
    }
    while(getchar() != '\n');

    float milesPerGallon = milesTravelled / gallonsConsumed;
    printf("Miles per gallon: %.1f\n", milesPerGallon);

    float litresPerHundredKm = 1 / ((milesPerGallon * (kmPerMile / 100.0)) / litresPerGallon);
    printf("Litres per 100-Km: %.1f\n", litresPerHundredKm);

    return 0;
}