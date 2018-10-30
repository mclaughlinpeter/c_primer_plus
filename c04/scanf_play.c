#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int myInt = 0;
    char c;

    printf("Enter an integer: ");
    while(scanf("%d", &myInt) != 1)
    {
        while((c = getchar()) != '\n')
            if (c == EOF)
            {
                printf("\nEOF entered, exiting\n");
                exit(1);
            }
        printf("Error, try again: ");
    }

    printf("\nYou entered: %d\n", myInt);

    return 0;
}