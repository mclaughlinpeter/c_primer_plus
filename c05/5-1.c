#include <stdio.h>

const int minutesInHour = 60;

int main(void)
{
    int minutesInput = 0;
    printf("Enter number of minutes: ");
    while (scanf("%d", &minutesInput) == 1 && minutesInput > 0)
    {
        while(getchar() != '\n');
        printf("Total minutes: %d\n", minutesInput);
        printf("Hours: %d, ", minutesInput / minutesInHour);
        printf("minutes: %d\n", minutesInput % minutesInHour);
        printf("Enter number of minutes: ");
    }

    return 0;
}