#include <stdio.h>

int main(void)
{
	unsigned int ns = 0, nl = 0, no = 0;

	printf("Enter input, # to quit: ");
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			++ns;
		else if (ch == '\n')
			++nl;
		else
			++no;
	}
	printf("Spaces:\t\t%3d\nNewlines:\t%3d\nOther:\t\t%3d\n", ns, nl, no);

	return 0;
}
