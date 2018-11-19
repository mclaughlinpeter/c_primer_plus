#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[21];
    printf("Enter word, max 20 characters: ");
    scanf("%20s", word);
    printf("%s\n", word);

    for (int i = strlen(word) - 1; i >= 0; --i)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}