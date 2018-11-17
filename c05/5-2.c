#include <stdio.h>

int main(void)
{
    int input = 0;
    printf("Enter integer: ");
    while (scanf("%d", &input) != 1)
    {
        while(getchar() != '\n');
        printf("Enter integer: ");
    }

    int count = 0;
    while (count <= 10)
    {
        printf("%4d ", input++);
        ++count;
    }
    printf("\n");

    return 0;
}