#include <stdio.h>

int main(void)
{
	printf("Enter text, # to quit: ");
	unsigned int nc = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		++nc;
		printf("%c=%3d\t", ch, ch);
		if ((nc % 8) == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
