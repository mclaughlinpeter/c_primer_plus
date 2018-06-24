#include <stdio.h>

int main(void)
{
    printf("How old are you? Enter number in years: ");
    int years;
    float secondsInYear = 3.156e7;
    while (scanf("%d", &years) == 1)
    {
        printf("Age in seconds: %f\n", secondsInYear * years);

        printf("How old are you? Enter number in years: ");
    }

    return 0;
}