#include <stdio.h>

int main(void)
{
    printf("Enter download speed in Mbs: ");
    float downloadSpeed = 0.0;
    while(scanf("%f", &downloadSpeed) != 1 || downloadSpeed <= 0.0)
    {
        while(getchar() != '\n');
        printf("Error, re-enter download speed: ");
    }
    while(getchar() != '\n');

    printf("Enter size of file in MB: ");
    float sizeOfFile = 0.0;
    while(scanf("%f", &sizeOfFile) != 1 || sizeOfFile <= 0.0)
    {
        while(getchar() != '\n');
        printf("Error, re-enter size of file: ");
    }
    while(getchar() != '\n');

    float downloadTime = (sizeOfFile * 8) / downloadSpeed;

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds\n", downloadSpeed, sizeOfFile, downloadTime);

    //  check for div by zero

    return 0;
}