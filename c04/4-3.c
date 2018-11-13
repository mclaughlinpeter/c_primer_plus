#include <stdio.h>

int main(void)
{
    double input = 0.0;
    printf("Enter a floating point number: ");
    while(scanf("%lf", &input) != 1)
    {
        while(getchar() != '\n');
        printf("Error, try again: ");
    }
    printf("The input is %.1f or %.1e\n", input, input);
    printf("The input is %+.3f or %.3e\n", input, input);

    return 0;
}