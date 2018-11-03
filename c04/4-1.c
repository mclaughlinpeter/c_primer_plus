#include <stdio.h>

#define BUFFER 10

int main(void)
{
    printf("Enter your first name: ");
    char firstName[20];
    scanf("%19s", firstName);
    while (getchar() != '\n');
    
    printf("Enter your last name: ");
    char lastName[20];
    scanf("%19s", lastName);
    while (getchar() != '\n');

    printf("First name: %s, Last name: %s\n", firstName, lastName);

    return 0;
}