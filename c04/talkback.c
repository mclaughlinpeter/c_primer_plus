#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    printf("Enter your name: ");
    scanf("%s", name);
    int size = sizeof name;

    printf("Name: %s\n", name);
    printf("sizeof name: %d\n", size);
    printf("Length of name: %lu\n", strlen(name));
    
    return 0;
}