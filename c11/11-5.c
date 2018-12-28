#include <stdio.h>

char * char_find(const char * str, char c);

int main(void)
{
	char array[] = "0123456789abcdef", * ret_val;
	char input;

	printf("Enter character to search, EOF to quit: ");
	while (scanf("%c", &input) == 1 && input != EOF)
	{
		if ((ret_val = char_find(array, input)) != NULL)
			printf("Character %c position: %zd\n", input, ret_val - array);
		else
			printf("Character %c not in string\n", input);
		while (getchar() != '\n');
		printf("Enter character to search, EOF to quit: ");
	}
	printf("\n");

	return 0;
}

char * char_find(const char * str, char c)
{
	while (*str)
	{
		if (*str == c)
			return str;
		++str;
	}
	return NULL;
}
