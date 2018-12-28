#include <stdio.h>
#include <stdbool.h>

bool char_find(const char * str, char c);

int main(void)
{
	char array[] = "0123456789abcdef";
	char input;

	printf("Enter character to search, EOF to quit: ");
	while (scanf("%c", &input) == 1 && input != EOF)
	{
		if (char_find(array, input))
			printf("Character %c in string\n", input);
		else
			printf("Character %c not in string\n", input);
		while (getchar() != '\n');
		printf("Enter character to search, EOF to quit: ");
	}
	printf("\n");

	return 0;
}

bool char_find(const char * str, char c)
{
	while (*str)
	{
		if (*str == c)
			return true;
		++str;
	}
	return false;
}
