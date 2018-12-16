#include <stdio.h>
#include <ctype.h>

int alphabetPosition(char ch);

int main(void)
{
	int input;
	while ((input = getchar()) != EOF)
		printf("%c: %2d\n", input, alphabetPosition(input));

	return 0;
}

int alphabetPosition(char ch)
{
	if (isupper(ch))
		ch = tolower(ch);

	if (ch >= 'a' && ch <= 'z')
		return ch - 96;
	else
		return -1;
}
