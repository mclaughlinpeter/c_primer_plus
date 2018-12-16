#include <stdio.h>

void chline(char ch, unsigned int i, unsigned int j);

int main(void)
{
	chline('*', 2, 4);
	return 0;
}

void chline(char ch, unsigned int i, unsigned int j)
{
	for (unsigned int a = j; a > 0; --a)
	{
		for (unsigned int b = i; b > 0; --b)
			printf("%c ", ch);
		putchar('\n');
	}
	
	return;
}

