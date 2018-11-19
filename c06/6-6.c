#include <stdio.h>

int main(void)
{
    int lower = 0;
    printf("Enter lower limit: ");
    while (scanf("%d", &lower) != 1)
    {
        while (getchar() != '\n');
        printf("Enter lower limit: ");
    }
    while (getchar() != '\n');

    int upper = 0;
    printf("Enter upper limit: ");
    while (scanf("%d", &upper) != 1 || upper <= lower)
    {
        while (getchar() != '\n');
        printf("Enter upper limit: ");
    }

    printf("Integer Square Cube\n");
    for (int value = lower; value <= upper; ++value)
    {
        printf("%7d %6d %4d\n", value, value * value, value * value * value);
    }

    return 0;
}