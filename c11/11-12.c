#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	puts("Enter characters, EOF on newline to exit.");
	char input;
	int wc = 0, uc = 0, lc = 0, pc = 0, dc = 0;
	bool inWord = false;
	while ((input = getchar()) != EOF)
	{
		if (isspace(input) && inWord)
		{
			++wc;
			inWord = false;
		}
		else if (isalpha(input))
			inWord = true;

		if (isupper(input))
			++uc;
		else if (islower(input))
			++lc;
		else if (ispunct(input))
			++pc;
		else if (isdigit(input))
			++dc;
	}
	printf("\nWords: %d\nUpper: %d\nLower: %d\nPunct: %d\nDigit: %d\n", wc, uc, lc, pc, dc);

	return 0;
}
