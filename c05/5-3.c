#include <stdio.h>

int main(void)
{
    int daysInput = 0;
    printf("Enter a number of days: ");
    while(scanf("%d", &daysInput) == 1 && daysInput > 0)
    {
        printf("%d days are %d weeks and %d days\n", daysInput, daysInput / 7, daysInput % 7);
        printf("Enter a number of days: ");
    }
    printf("\n");

    return 0;
}