#include <stdio.h>
#define LIM 30

char * s_gets(char * st, int n);

int main(void)
{
	char number[LIM];
	
	puts("Enter lines, empty line to quit:");
	while (s_gets(number, LIM) && number[0] != '\0')
		puts(number);

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			++st;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n');
	}
	return ret_val;
}
