#include <stdio.h>

int main(void)
{
	printf("Enter text, # to quit: ");
	char ch;
	unsigned int noSubs = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			++noSubs;
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar('!');
			++noSubs;
		}
		else
			putchar(ch);
	}
	printf("\nNo. of subs: %3d\n", noSubs);

	return 0;
}
