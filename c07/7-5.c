#include <stdio.h>

int main(void)
{
	printf("Enter text, # to quit: ");
	char ch;
	unsigned int noSubs = 0;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case '.':
				putchar('!');
				++noSubs;
				break;
			case '!':
				putchar('!');
				putchar('!');
				++noSubs;
				break;
			default:
				putchar(ch);
		}
	}
	printf("\nNo. of subs: %3d\n", noSubs);

	return 0;
}
