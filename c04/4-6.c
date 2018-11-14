#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Enter your first name: ");
    char firstName[20];
    scanf("%19s", firstName);
    while(getchar() != '\n');

    printf("Enter your last name: ");
    char lastName[20];
    scanf("%19s", lastName);
    while(getchar() != '\n');

    printf("%s %s\n%*zd %*zd\n", firstName, lastName, (int)strlen(firstName), strlen(firstName), (int)strlen(lastName), strlen(lastName));

    return 0;
}