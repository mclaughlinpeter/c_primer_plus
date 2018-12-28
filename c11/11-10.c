#include <stdio.h>
#include <string.h>

void remove_spaces(char * str);

int main(void)
{
	char array[] = "hello there mr Big chap";
	remove_spaces(array);
	puts(array);

	return 0;
}

void remove_spaces(char * str)
{
	char * pc = str;
	while (*pc)
	{
		if (*pc != ' ')
			*str++ = *pc++;
		else
			++pc;
	}
	*str = '\0';

	return;
}


