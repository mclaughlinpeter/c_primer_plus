#include <stdio.h>

int main(void)
{
    int rows = 5;
    
    char c;
    printf("Enter upper case char: ");
    while (scanf("%c", &c) != 1 || c < 'A' || c > 'Z')
    {
        while (getchar() != '\n');
        printf("Enter upper case char: ");
    }

    for (int row = 1; row <= rows; ++row)
    {
        for (int spaces = row; spaces < rows; ++spaces)
            printf(" ");

        char d;
        for (d = c; d < c + row; ++d)
            printf("%c", d);
        for (d = c + (row - 2); d >= c; --d)
            printf("%c", d);
        
        printf("\n");
    }

    return 0;
}