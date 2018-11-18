#include <stdio.h>

int main(void)
{
    int input = 0;
    printf("Enter number of days: ");
    while (scanf("%d", &input) != 1 || input <= 0)
    {
        while(getchar() != '\n');
        printf("Enter number of days: ");
    }

    int sum = 0;
    int count = 1;
    while(count <= input)
    {
        sum += count++;
    }
    printf("sum = $%d\n", sum);

    return 0;
}