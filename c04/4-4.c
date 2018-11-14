#include <stdio.h>

int main(void)
{
    printf("Enter your name: ");
    char name[40];
    scanf("%39s", name);
    while(getchar() != '\n');

    printf("Enter your height in inches: ");
    float heightInches = 0.0;
    while(scanf("%f", &heightInches) != 1)
    {
        while(getchar() != '\n');
        printf("Error, try again: ");
    }
    while(getchar() != '\n');

    float heightFeet = heightInches / 12.0;

    printf("%s, you are %.3f feet tall\n", name, heightFeet);

    return 0;
}