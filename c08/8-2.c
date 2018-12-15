#include <stdio.h>

int main(void)
{
	int c;
	unsigned int count = 0;
	printf("Enter input, EOF to terminate: ");
	while ((c = getchar()) != EOF)
	{
		if (c <= 31 && c != '\n' && c != '\t')
			printf("%4d: ^%c", c, c + 64);
		else
			printf("%4d: %c", c, c);
		if (c == '\n')
		{
			count = 0;
			continue;
		}
		++count;
		if ((count % 10) == 0)
			putchar('\n');
	}

	return 0;
}
