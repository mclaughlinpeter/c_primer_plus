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
    if (feof(stdin))
        printf("EOF entered\n");
    else
        printf("Input issue encountered\n");

    return 0;
}