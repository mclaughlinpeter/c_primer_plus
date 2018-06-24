#include <stdio.h>

int main(void)
{
    const double moleculeMass = 3.0e-23;
    const int quartWeight = 950;

    double inputQuarts = 0.0;
    printf("Enter amount of water in quarts: ");
    while (scanf("%lf", &inputQuarts) == 1)
    {
        printf("Number of water molecules: %le\n", (inputQuarts * quartWeight) / moleculeMass);

        printf("Enter amount of water in quarts: ");
    }

    return 0;
}