#include <stdio.h>
#include <ctype.h>

char get_first_nws(void);

int main(void)
{
	do {
		printf("Enter line of text, 'q' on new line to exit: ");
	} while (get_first_nws() != 'q');

	return 0;
}

char get_first_nws(void)
{
	char ch;
	while ((ch = getchar()) && isspace(ch));
	printf("First nws char: '%c'\n", ch);
	while (getchar() != '\n');
	return ch;
}

