#include <stdio.h>

int main(void)
{
    printf("Enter ASCII code value: ");
    int input;
    
    while (scanf("%d", &input) == 1)
    {
        if (input >= 0 && input <= 127)
            printf("Character: %c\n", input);
        else
            printf("Input out of range.\n");
        printf("Enter ASCII code value: ");
    }
    printf("EOF or incorrect input entered\n");

    return 0;
}