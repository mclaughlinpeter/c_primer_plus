#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	printf("Enter input, EOF to terminate: ");
	unsigned int lc = 0, wc = 0;
	int c;
	bool inWord = false;

	while ((c = getchar()) != EOF)
	{
		if (isalpha(c))
		{
			inWord = true;
			++lc;
		}
		else if (inWord == true)
		{
			inWord = false;
			++wc;
		}
	}

	printf("Average letters per word: %3.2f\n", (float) lc / wc);

	return 0;
}
