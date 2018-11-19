#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 6; ++i)
    {
        char c = 'F';
        for (int j = 1; j <= i; ++j, c -= 1)
            printf("%c", c);
        printf("\n");
    }

    return 0;
}