#include <stdio.h>

int main(void)
{
    char elements[26] = "abcdefghijklmnopqrstuvuxyz";
    for (int i = 0; i < 26; ++i)
    {
        printf("%c", elements[i]);
    }
    printf("\n");

    return 0;
}