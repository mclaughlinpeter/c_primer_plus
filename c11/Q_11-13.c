#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ANSWER "GRANT"
#define SIZE 40

char * s_gets(char * st, int n);
void toUpperString(char * st);

int main(void)
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	toUpperString(try);
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
		toUpperString(try);
	}
	puts("That's correct!");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		char * find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n');
	}
	return ret_val;
}

void toUpperString(char * st)
{
	while (*st)
	{
		*st = toupper(*st);
		++st;
	}
	return;
}


