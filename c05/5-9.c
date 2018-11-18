#include <stdio.h>

#define FahrenheitToCelsius(x) 5.0 / 9.0 * (x - 32.0)
#define CelsiusToKelvin(x) x + 273.16

void temperatures(double tempFahr);

int main(void)
{
    double tempFahr = 0.0;
    printf("Enter temperature in Fahrenheit: ");
    while(scanf("%lf", &tempFahr) == 1)
    {
        while (getchar() != '\n');
        temperatures(tempFahr);
        printf("Enter temperature in Fahrenheit: ");
    }

    return 0;
}

void temperatures(double tempFahr)
{
    printf("Celsius: %f\n", FahrenheitToCelsius(tempFahr));
    printf("Kelvin: %f\n", CelsiusToKelvin(FahrenheitToCelsius(tempFahr)));
}