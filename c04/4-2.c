#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Please enter your first name: ");
    char firstName[20];
    scanf("%19s", firstName);
    printf("Name in double quotations: \"%s\"\n",firstName);
    printf("Name in double quotations with 20 wide field, right justified: \"%20s\"\n", firstName);
    printf("Name in double quotations with 20 wide field, left justified: \"%-20s\"\n", firstName);
    printf("Name in field 3 characters wider than the name: %*s\n", (int)strlen(firstName) + 3, firstName);

    return 0;
}