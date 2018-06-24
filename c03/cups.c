#include <stdio.h>

int main(void)
{
    float inputCups = 0.0;
    printf("Enter volume in cups: ");
    while (scanf("%f", &inputCups) == 1)
    {
        printf("Pints:\t%10.2f\n", inputCups / 2);
        printf("Ounces:\t%10.2f\n", 8 * inputCups);
        printf("Tblsps:\t%10.2f\n", 16 * inputCups);
        printf("Teasps:\t%10.2f\n", 48 * inputCups);

        printf("Enter volume in cups: ");
    }

    return 0;
}